def bill(p,c,cd):
    pp,cp,cdp=100,25,10
    total=(p*pp)+(c*cp)+(cd*cdp)
    print("Bill:")
    print(f"Pizzas:{p}x{pp}=Rs.{p*pp}")
    print(f"Cakes:{c}x{cp}=Rs.{c*cp}")
    print(f"Cold Drink:{cd}x{cdp}=Rs.{cd*cdp}")
    print("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -")
    print(f"Total:Rs.{total}")
    print("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -")
p=int(input("Quantity of Pizzas:"))
c=int(input("Quantity of Cakes:"))
cd=int(input("Quantity of Cold drinks:"))
print("\n")
bill(p,c,cd)
    
