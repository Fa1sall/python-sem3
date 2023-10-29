try:
    with open("C:\\Users\\user\\Documents\\python\\File.txt") as file:
        for line in file:
            words = line.split()
            print("Line from the file:", line)
            print("Number of words in this line: ",len(words))
            word_count={}
            duplicate_words=[]

            for word in words:
                word=word.lower()
                if word in word_count:
                    word_count[word]+=1
                    if word_count[word]==2:
                        duplicate_words.append(word)
                else:
                    word_count[word]=1

            if duplicate_words:
                print("Duplicate words in the line:", duplicate_words)
                print("Maximum duplicate count in this line:",max(word_count[word] for word in duplicate_words))
            else:
                print("No duplicates found in this line.")

except FileNotFoundError:
    print("File not found.")
except Exception as e:
    print("An error occured:",str(e))
