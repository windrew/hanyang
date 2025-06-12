cars_list = [
{'maker': 'Toyota', 'model': 'Camry', 'year': 2019, 'color':
'red', 'price': 22000},
{'maker': 'Honda', 'model': 'Civic', 'year': 2020, 'color':
'blue', 'price': 18000},
{'maker': 'Hyundai', 'model': 'Tucson', 'year': 2023,
'color': 'grey', 'price': 27000},
{'maker': 'Tesla', 'model': 'Model 3', 'year': 2021, 'color':
'white', 'price': 40000},
{'maker': 'Chevrolet', 'model': 'Corvette', 'year': 2022,
'color': 'black', 'price': 65000},
{'maker': 'Tesla', 'model': 'Model Y', 'year': 2022, 'color':
'blue', 'price': 70000}
]

def get_cars_by_make(L, maker):
    ret = []
    for i in range(len(L)):
        if L[i]['maker'] == maker:
            ret.append(L[i])
    return ret

def get_cars_by_price(L, mn, mx):
    ret = []
    for i in range(len(L)):
        if mn <= L[i]['price'] <= mx:
            ret.append(L[i])
    return ret

while True:
    print("***** Search method *****")
    print("1. Maker")
    print("2. Price")
    print("3. Exit")
    op = int(input("Choose a method: "))
    if op == 1:
        maker = input("Maker: ")
        ret = get_cars_by_make(cars_list,maker)
    elif op == 2:
        mn = int(input("minimum price: "))
        mx = int(input("maximum price: "))
        ret = get_cars_by_price(cars_list,mn,mx)
    else:
        print("bye",end="")
        break
    print("Result: ",end="")
    print(ret)