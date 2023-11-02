uc_start=65
uc_end=90
lc_start=97
lc_end=122

print(f"Uppercase English ASCII values start from '{chr(uc_start)}' and end at '{chr(uc_end)}'.")
print(f"Lowercase English ASCII values start from '{chr(lc_start)}' and end at '{chr(lc_end)}'.")

def convert_to_alphabet(input_values):
    characters=[]
    for value in input_values:
        try:
            num=int(value)
            if uc_start<=num<=uc_end or lc_start<=num<=lc_end:
                characters.append(chr(num))
            else:
                print(f"Warning: {num} is not a valid ASCII value for English alphabet, skipping.")
        except ValueError:
            print(f"Warning: '{value}' is not valid ASCII value, skipping.")
    return characters
        
try:
    input_values=input("Enter ASCII values seperated by spaces:").split()
    output=convert_to_alphabet(input_values)

    if output:
        print(f"The converted characters are: {output}")
    else:
        print("No valid input provided.")
except ValueError:
    print("Invalid input. Please enter valid ASCII values seperated by spaces.")
