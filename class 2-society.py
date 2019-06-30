class society:
    def __init__(self):
        self.society_name="surya aparments"
        self.house_number=20
        self.flat_type="A type"
        self.no_of_members=3
        self.income=25000
    def input_data(self):
        self.society_name=input("enter society name")
        self.house_number=int(input("enter house number"))
        self.allocate_flat()
        self.no_of_members=int(input("enter number of house members"))
        self.income=int(input("enter income"))
    def allocate_flat(self):
        if self.income>=25000:
            self.flat_type=="A type"
        elif self.income<=25000 and self.income>=20000:
            self.flat_type=="B type"
        else:
            self.flat_type=="C type"
    def show_data(self):
        print("society name",self.society_name)
        print("house number",self.house_number)
        print("flat type",self.flat_type)
        print("number of members",self.no_of_members)
        print("income",self.income)
S=society()
S.input_data()
S.show_data()
