accounts = {}
next_account_number = 1001


def create_account():
    global next_account_number

    name = input("Enter account holder name: ")
    initial_deposit = float(input("Enter initial deposit: "))

    account_number = next_account_number
    next_account_number += 1

    accounts[account_number] = {
        "name": name,
        "balance": initial_deposit
    }

    print("\nAccount created successfully!")
    print("Account Number:", account_number)


def deposit():
    account_number = int(input("Enter account number: "))

    if account_number in accounts:
        amount = float(input("Enter deposit amount: "))

        if amount > 0:
            accounts[account_number]["balance"] += amount
            print("Deposit successful!")
        else:
            print("Invalid amount.")
    else:
        print("Account not found.")


def withdraw():
    account_number = int(input("Enter account number: "))

    if account_number in accounts:
        amount = float(input("Enter withdrawal amount: "))

        if amount <= 0:
            print("Invalid amount.")
        elif amount > accounts[account_number]["balance"]:
            print("Insufficient balance.")
        else:
            accounts[account_number]["balance"] -= amount
            print("Withdrawal successful!")
    else:
        print("Account not found.")


def check_balance():
    account_number = int(input("Enter account number: "))

    if account_number in accounts:
        print("Account Holder:", accounts[account_number]["name"])
        print("Balance:", accounts[account_number]["balance"])
    else:
        print("Account not found.")


def display_accounts():
    if not accounts:
        print("No accounts found.")
        return

    print("\n=== ALL ACCOUNTS ===")

    for account_number, account in accounts.items():
        print("Account Number:", account_number)
        print("Name:", account["name"])
        print("Balance:", account["balance"])
        print("--------------------")


def main():
    while True:
        print("\n=== BANK MANAGEMENT SYSTEM ===")
        print("1. Create Account")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Check Balance")
        print("5. Display Accounts")
        print("6. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            create_account()

        elif choice == "2":
            deposit()

        elif choice == "3":
            withdraw()

        elif choice == "4":
            check_balance()

        elif choice == "5":
            display_accounts()

        elif choice == "6":
            print("Thank you!")
            break

        else:
            print("Invalid choice.")


main()
