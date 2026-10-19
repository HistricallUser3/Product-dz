#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
	string name;
	string category;
	double price;
	int quantity;
public:
	Product();
	Product(string n, string c, double pr, int q);
	void Initialize(string n, string c, double pr, int q);
	void Print() const;
	// Setters and Getters
	void SetName(string n);
	void SetCategory(string c);
	void SetPrice(double pr);
	void SetQuantity(int q);

	string GetName() const;
	string GetCategory() const;
	double GetPrice() const;
	int GetQuantity() const;

};

Product& operator++(Product& product);
Product operator++(Product& product, int);
Product& operator--(Product& product);
Product operator--(Product& product, int);
Product& operator+=(Product& product, int amount);
Product& operator-=(Product& product, int amount);
