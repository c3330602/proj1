 #include <stdio.h>
 #include <string.h>

void rotatione(void); //functions
void rotationd(void);
void sube(void);

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
                    case 1: printf("Encryption chosen\n");
                            sube();
                        break;
                    case 2: printf("Decryption chosen\n");
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
    int length = 1000; //change if not long enough
    char message[1000]; //chane if not long enough
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
    int length = 1000; //change if too low
    char message[1000]; //change if too low
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

void sube(void) {
    char message[1000];//message
    int N;//counter
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z; //had to use seperate varibles as was have problems scanning multiple arrays
    
    printf("input key:\n");
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z);
    printf("key is:\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
    printf("input message\n");
    scanf("%[^\n]s\n", message);//scans message
    printf("message is:\n%s\n", message);
    
    for(N = 0; N < 1000; N++) {
            switch(message[N]) { //determines what the letter for N is and replaces it with substitution
                case 'A': message[N] = a;
            break;
                case 'B': message[N] = b;
            break;
                case 'C': message[N] = c;
            break;
                case 'D': message[N] = d;
            break;
                case 'E': message[N] = e;
            break;
                case 'F': message[N] = f;
            break;
                case 'G': message[N] = g;
            break;
                case 'H': message[N] = h;
            break;
                case 'I': message[N] = i;
            break;
                case 'J': message[N] = j;
            break;
                case 'K': message[N] = k;
            break;
                case 'L': message[N] = l;
            break;
                case 'M': message[N] = m;
            break;
                case 'N': message[N] = n;
            break;
                case 'O': message[N] = o;
            break;
                case 'P': message[N] = p;
            break;
                case 'Q': message[N] = q;
            break;
                case 'R': message[N] = r;
            break;
                case 'S': message[N] = s;
            break;
                case 'T': message[N] = t;
            break;
                case 'U': message[N] = u;
            break;
                case 'V': message[N] = v;
            break;
                case 'W': message[N] = w;
            break;
                case 'X': message[N] = x;
            break;
                case 'Y': message[N] = y;
            break;
                case 'Z': message[N] = z;
            break;
        }
    }
    printf("encrypted message is:\n%s", message);//prints result
}