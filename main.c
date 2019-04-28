 #include <stdio.h>
 #include <string.h>

void rotatione(void); //functions
void rotationd(void);

int cypher, cryption; //variables used for changing between options

int main() {
    printf("Input 1 for Rotaion or 2 for Substitution\n");
    scanf("%d", &cypher);
    switch(cypher) { //switch between cypher used
        case 1: printf("Rotation chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d\n", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen\n");
                            rotatione();
                        break;
                    case 2: printf("Decryption chosen\n");
                            rotationd();
                        break;
                    default: printf("error");
                }
            break;
        case 2: printf("Substitution chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d\n", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen");
                        break;
                    case 2: printf("Decryption chosen");
                        break;
                    default: printf("error"); //prints error message
                }
            break;
        default: printf("error");
    }
    return 0;
}

void rotatione(void) {
    int key, difference, N = 0; //variables needed in function
    int length = 200; //change if not long enough
    char message[200]; //chane if not long enough
    printf("choose key\n");
    scanf("%d\n", &key); //scans value chosen for key
    printf("%d chosen as key\n", key);
    printf("choose message to encrypt\n");
    scanf("%[^\n]s\n", message); //scans entire row of input
    printf("message chosen to encrypt:\n%s\n", message);
    
    while(N < length) {
        if(message[N] >= 65 && message[N] <= 90) { //only includes capital letters
            
            message[N] = message[N] + key; // adds or subtracts based off key
            if(message[N] > 90) { //for when key goes past Z
                difference = message[N] - 90;
                message[N] = 64 + difference;
            }if(message[N] < 65){ //for when key goes past A
                difference = 65 - message[N];
                message[N] = 91 - difference;
            }
        }
        
        N = N + 1; // goes to next element of array
    }
    printf("encrypted message:\n%s\n", message);
}

void rotationd(void) {
    int key = 1, difference, N = 0; //variables used only needed in function
    int length = 200; //change if too low
    char message[200]; //change if too low
    printf("input encrypted message\n");
    scanf("%[^\n]s\n", message); //scans input including spaces untill new line of input
    printf("key no 0: %s\n", message);
    while(key < 26) { //loop goes 25 times so that all possible combinations are printed
        while(N < length) {
            if(message[N] >= 65 && message[N] <= 90) {
                
                message[N] = message[N] + key;
                if(message[N] > 90) { //if greater than Z
                    difference = message[N] - 90;
                    message[N] = 64 + difference;
                }if(message[N] < 65){ // if less than A
                    difference = 65 - message[N];
                    message[N] = 91 - difference;
                }
            }
            
            N = N + 1; //goes to next element of array
        }
        printf("key no %d: %s\n", key, message); //prints array
        key = key + 1; //goes to next possible key
        N = 0; //resets N
    }
}