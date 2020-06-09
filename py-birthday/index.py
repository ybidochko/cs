
from datetime import date

def birthdayFunction():
  print('')

  i = 1
  while(i<6):
    print("HAPPY BIRTHDAY TO THE BEST MOM IN THE WORLD!")
    i += 1  


  print('''          .-"""-.    .-"""-. ''')
  print('''         /       `..'       \ ''')
  print('''        |                    | ''')
  print('''        |                    | ''')
  print('''         \                  / ''')
  print('''          \                / ''')
  print('''           `\            /' ''')
  print('''             `\        /' ''')
  print('''               `\    /' ''')
  print('''                 `\/' ''')

  i = 1
  while(i<6):
    print("HAPPY BIRTHDAY TO THE BEST MOM IN THE WORLD!")
    i += 1  

today = date.today()

if (today == date(today.year, 6, 9)):
  birthdayFunction()
