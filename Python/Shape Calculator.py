import math

print("=== Shape Calculator ===")
print("1. Square")
print("2. Rectangle")
print("3. Circle")
print("4. Triangle")
print("5. Parallelogram")
print("6. Trapezoid")

choice = input("Choose a shape (1-6): ")

if choice == "1":
    side = float(input("Enter side: "))

    area = side ** 2
    perimeter = 4 * side

elif choice == "2":
    length = float(input("Enter length: "))
    width = float(input("Enter width: "))

    area = length * width
    perimeter = 2 * (length + width)

elif choice == "3":
    radius = float(input("Enter radius: "))

    area = math.pi * radius ** 2
    perimeter = 2 * math.pi * radius

elif choice == "4":
    base = float(input("Enter base: "))
    height = float(input("Enter height: "))
    side1 = float(input("Enter first side: "))
    side2 = float(input("Enter second side: "))

    area = 0.5 * base * height
    perimeter = base + side1 + side2

elif choice == "5":
    base = float(input("Enter base: "))
    side = float(input("Enter side: "))
    height = float(input("Enter height: "))

    area = base * height
    perimeter = 2 * (base + side)

elif choice == "6":
    base1 = float(input("Enter first base: "))
    base2 = float(input("Enter second base: "))
    side1 = float(input("Enter first side: "))
    side2 = float(input("Enter second side: "))
    height = float(input("Enter height: "))

    area = ((base1 + base2) * height) / 2
    perimeter = base1 + base2 + side1 + side2

else:
    print("Invalid choice!")
    exit()

print("\nArea:", area)
print("Perimeter:", perimeter)
