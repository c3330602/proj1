 #include <stdio.h>
 #include <string.h>

void rotatione(void);

int cypher, cryption;

int main() {
    printf("Input 1 for Rotaion or 2 for Substitution\n");
    scanf("%d", &cypher);
    switch(cypher) { //switch between cypher used
        case 1: printf("Rotation chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen\n");
                            rotatione();
                        break;
                    case 2: printf("Decryption chosen\n");
                            
                        break;
                    default: printf("error");
                }
            break;
        case 2: printf("Substitution chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen");
                        break;
                    case 2: printf("Decryption chosen");
                        break;
                    default: printf("error");
                }
            break;
        default: printf("error");
    }
    return 0;
}

void rotatione(void) {
    int key, difference, N = 0;
    int length = 200; //change if not long enough
    char message[200];
    printf("choose key\n");
    scanf("%d\n", &key);
    printf("%d chosen as key\n", key);
    scanf("%[^\n]s\n", message);
    printf("message chosen to encrypt: %s\n", message);
    
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
        
        N = N + 1;
    }
    printf("%s", message);
}