import csv
import re

with open("C:\\script\\Scrapped.txt", "r") as f:
    l = f.readlines()



L = []
for ele in l:
    ele = ele.replace("\n","")
    L.append(ele)

# print(L)
List = []
for i in range(len(L)):
    if L[i]=="Route":
        pass
    else:
        ele = L[i].replace(" Destination", "")
        List.append(ele)
        

Route= []
Destination= []
Time = []

    
for m in range(len(List)):
    if m%2!=0:
        loc = re.search(r"\d", List[m]).start()
        D = List[m][0:loc]
        Destination.append(D)
        T = List[m][loc:]
        Time.append(T)
    else:
        Route.append(List[m])

with open("Time.csv", "w", encoding="UTF8") as f:
    writer= csv.writer(f)
    L=[]
    for n in range(len(Route)):
        L.append([Route[n], Destination[n], Time[n]])
        
    print(L)    
    writer.writerows(L)

    


# Routes = []

# for i in range(len(L)):
#     if i <=20 and i>0:
#         R = L[i].replace("Route", "")
#         R = R.replace("Destination", "")
#         Routes.append(R)
#     if i <=20 and i>20:
#         R = L[i].replace("Route", "")
#         R = R.replace("Destination", "")
#         Routes.append(R)

# print(Routes)