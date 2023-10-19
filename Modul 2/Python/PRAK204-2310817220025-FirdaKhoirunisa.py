print("Input")
r,t = map(int, input().split())

phi = 22/7

volume = phi*pow(r, 2)*t
luas = 2*phi*pow(r, 2)+2*phi*r*t
keliling = 2*phi*r

print("\nOutput")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")