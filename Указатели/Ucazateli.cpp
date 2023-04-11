//Гусев Антон
//УТС/22-2-о
//Вариан 4

#include <iostream>


//Задача 1
/*
int main()
{
    short* num1;
    short* num2;
    num1 = new short;
    num2 = new short;
    *num1 = 2;
    *num2 = 3;
    short num3 = *num1 + *num2;
    short num4 = *num1 - *num2;
    std::cout<<"num1+num2: "<<num3<<std::endl;
    std::cout<<"num1-num2: "<<num4<<std::endl;
    std::cout<<"num1 adress: "<<num1<<std::endl;
    std::cout<<"num2 adress: "<<num2<<std::endl;
    delete num1;
    delete num2;
    return 0;
}*/

//Задание 2.
/*void obmen(short* &num1,short* &num2)
{
    short value;
    value = *num1;
    *num1 = *num2;
    *num2 = value;
}
int main()
{
    short* num1;
    short* num2;
    num1 = new short;
    num2 = new short;
    *num1 = 2;
    *num2 = 3;
    std::cout<<"num1 = "<<*num1<<"; num1 adress: "<<num1<<std::endl;
    std::cout<<"num2 = "<<*num2<<"; num2 adress: "<<num2<<std::endl;
    obmen(num1,num2);
    std::cout<<"num1 = "<<*num1<<"; num1 adress: "<<num1<<std::endl;
    std::cout<<"num2 = "<<*num2<<"; num2 adress: "<<num2<<std::endl;
    delete num1;
    delete num2;
    return 0;
}*/

//Задание 3.
/*void zapoln_arr(short* arr,int nsize)
{
    for (int i = 0; i < nsize; i++)
    {
        arr[i] = rand() % 100;
    }
}
int main()
{
    short* arr = nullptr;
    int nsize;
    std::cin >> nsize;
    arr = new short[nsize];
    zapoln_arr(arr,nsize);
    for (int i = 0; i < nsize; i++)
    {
        std::cout <<"(" << &arr[i] << ") = "<< arr[i] << std::endl;
    }
    delete []arr;
    return 0;
}*/

//Задание 4
/*const int N = 3;

struct Book
{
    int pages;
    double mass;
};

void changes(Book* books, const int N)
{
    for (int i = 0; i < N; i++)
    {
        books[i].pages += 2;
        books[i].mass += 0.45;
    }
}

int main()
{
    Book* books = nullptr;
    books = new Book[N];

    for (int i = 0; i < N; i++)
    {
        books[i].pages = rand() % 100;
        books[i].mass = rand() % 5;

        std::cout << "(" << &books[i] << ") = Pages: " << books[i].pages
            << ". Mass: " << books[i].mass << std::endl;
    }

    std::cout << std::endl;


    changes(books, N);

    for (int i = 0; i < N; i++)
    {
        std::cout << "(" << &books[i] << ") = Pages: " << books[i].pages
            << ". Mass: " << books[i].mass << std::endl;
    }

    delete[] books;

    return 0;
}*/
