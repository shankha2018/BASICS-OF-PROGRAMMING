class ITEMINFO:
    def __init__ (self):
        self.icode=0
        self.item=" "
        self.price=0
        self.qty=0
        self.discount_percentage=0
        self.netprice=0
    def buy(self):
        self.icode=int(input("enter item code"))
        self.item=input("enter item name")
        self.price=int(input("enter item price"))
        self.qty=int(input("enter no of items"))
        self.find_disc()
        self.netprice=(self.price*self.qty)-(self.discount_percentage*self.price*self.qty)/100.0
    def find_disc(self):
        if self.qty<=10:
            self.discount_percentage=0
        elif self.qty>=11 and self.qty<=20:
            self.discount_percentage=15
        else:
            self.discount_percentage=20
    def show_all(self):
        print("item code     :",self.icode)
        print("item name     :",self.item)
        print("item price    :",self.price)
        print("item quantity :",self.qty)
        print("item discount :",self.discount_percentage)
        print("item netprice :",self.netprice)
i=ITEMINFO()
i.buy()
i.show_all()

            
        
