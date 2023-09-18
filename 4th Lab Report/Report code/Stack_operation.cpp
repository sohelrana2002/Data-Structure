//STACK OPERATION
#include <bits/stdc++.h>
using namespace std;

    int top = -1;
    #define size 5
    int myArray[size];
    // ========FUNCTION DECLEARATION==========
    void pushFunction();
    void popFunction();
    void showFunction();
    void endFunction();
    void mainFunction();

int main(){
    mainFunction();
}

// =========PUSH OPERATION=========
void pushFunction(){
    system("cls");
    int value;
    if(top == size - 1){
        cout << "Stack is overflow";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }else{
        top = top + 1;
        cout << "\nEnter " << top << " index element: ";
        cin >> value;
        myArray[top] = value;
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
}

// ============POP OPERATION============
void popFunction(){
    system("cls");
    int item;
    if(top == -1){
        cout << "Stack is overflow";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }else{
        item = myArray[top];
        cout << "\n" << item << " Element is deleted successfully & index num: " << top;
        top = top - 1;
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
}

// ==========SHOW OPERATION==========
void showFunction(){
    system("cls");
    if(top == -1){
        cout << "Stack is overflow";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
    for(int i = 0 ; i <= top ; i++){
        cout << "\n" << i << " index element is: " << myArray[i];
    }
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
}

// ==========END OPERATION==========
void endFunction(){
    cout << "Your program is finished";
    exit(0);
}

// =========MAINFUNCTION OPERATION=========
void mainFunction(){
    system("cls");
    int choice;
    cout << "1. Insert element (Push)" <<endl;
    cout << "2. Deletion element (Pop)" <<endl;
    cout << "3. Show Function" <<endl;
    cout << "4. End operation" <<endl;
    cout << "Choice your option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        pushFunction();
        break;

    case 2:
        popFunction();
        break;

    case 3:
        showFunction();
        break;

    case 4:
        endFunction();
        break;
    
    default:
        cout << "Something went wrong";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
}