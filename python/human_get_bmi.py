class Human:
    age = 0
    lastname = ''
    firstname = ''
    height = 0.0 #メートル
    weight = 0.0 #メートル

    def get_bmi(self):
        return (self.weight) / (self.height ** 2)

sawada = Human()
sawada.lastname = '澤田'
sawada.firstname = '武'
sawada.weight = 78
sawada.height = 1.75

bmi = sawada.get_bmi()
print (bmi)
