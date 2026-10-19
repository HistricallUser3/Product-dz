#include "Product.h"
#include <iostream>
using namespace std;

Product::Product() : price(0.0), quantity(0) {
   
}


Product::Product(string n, string c, double pr, int q) : name(n), category(c), price(pr), quantity(q) {}

void Product::Initialize(string n, string c, double pr, int q) {
    name = n;
    category = c;
    price = pr;
    quantity = q;
}

void Product::Print() const {
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
}

void Product::SetName(string n) {
    name = n;
}

void Product::SetCategory(string c) {
    category = c;
}

void Product::SetPrice(double pr) {
    price = pr;
}

void Product::SetQuantity(int q) {
    quantity = q;
}

string Product::GetName() const {
    return name;
}

string Product::GetCategory() const {
    return category;
}

double Product::GetPrice() const {
    return price;
}

int Product::GetQuantity() const {
    return quantity;
}


Product& operator++(Product& product) {
    product.SetQuantity(product.GetQuantity() + 1);
    return product;
}

Product operator++(Product& product, int) {
    Product previous = product;
    ++product;
    return previous;
}

Product& operator--(Product& product) {
    product.SetQuantity(product.GetQuantity() - 1);
    return product;
}

Product operator--(Product& product, int) {
    Product previous = product;
    --product;
    return previous;
}

Product& operator+=(Product& product, double amount) {
    product.SetPrice(product.GetPrice() + amount);
    return product;
}

Product& operator-=(Product& product, double amount) {
    product.SetPrice(product.GetPrice() - amount);
    return product;
}