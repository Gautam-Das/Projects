#Import relevant files
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
import time

#set up the chrome driver 
options = webdriver.ChromeOptions()
options.add_experimental_option('excludeSwitches', ['enable-logging'])
driver = webdriver.Chrome(options=options)

#Go to the adelaide metro website
driver.get("https://www.adelaidemetro.com.au/plan-a-trip/next-service?lat=-34.88165122578&lon=138.59373196892")

#Wait till page loades
time.sleep(10)
print("wait over")

#get the route, destination and time of arrival of the bus
Ro = driver.find_elements_by_class_name('service-list-item__route')
Dest = driver.find_elements_by_class_name('service-list-item__headsign')
Time = driver.find_elements_by_class_name('service-list-item__arrives-min')


Routes = []

#Put the routes found into arrays
for i in range(len(Ro)):
    if i%2!=0:
        string = Ro[i].text
        #remove newline character and "route" from the found routes
        string = string.replace("\n", "")
        string = string.replace("Route", "")
        #append to array
        Routes.append(string)

 
for j in range(len(Dest)):
    print(Dest[j].text)
# print(Dest)


Times = []



# for ele in element:
#     string = ele.text
#     string = string.remove("Route")

