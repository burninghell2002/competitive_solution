def encode(message):
    count = 0
    chatacter = ''
    previous_char = message[0]
    result = ''
    length = len(message) 
    
    i = 0
    while (i != length ):
        chatacter = message[i]
        
        if previous_char == chatacter :
            count = count + 1
        else :
            result = result + str(count) + previous_char
            count = 1
        #print(str(i) + str(chatacter) + str(previous_char) + "          " + str(result))
        previous_char = chatacter
        i = i + 1
        
    return result + str(count) + str(previous_char)

m=int(input("Enter the string"))
encoded_message=encode(m)
print(encoded_message)
