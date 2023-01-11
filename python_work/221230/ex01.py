from faker import Faker

fak=Faker("ko-KR")
a=fak.name()
print(a)