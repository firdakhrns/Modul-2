import math

print("Input")
a,b = map(int, input().split())

alas = math.sqrt(pow(b, 2)-pow(a, 2))
tinggi = a
keliling = a+b+alas
luas = 1/2*alas*tinggi

print("\nOutput")
print("Alas =", int(alas), "cm")
print("Tinggi =", int(tinggi), "cm")
print("Keliling =", int(keliling), "cm")
print("Luas =", int(luas), "cm^2")