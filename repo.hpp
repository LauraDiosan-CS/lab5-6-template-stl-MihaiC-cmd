//
//  repo.hpp
//  Lab_6
//
//  Created by Comsa Mihai on 30/03/2020.
//  Copyright © 2020 Comsa Mihai. All rights reserved.
//

#include "product.hpp"
#pragma once
#include <vector>
#include <iostream>

class Repo
{
private:
    vector<Product> products;
public:
    Repo();
    ~Repo();
    vector<Product> get_all();
    Product get_product_at_position(int pos);
    long get_size();
    void add_product(Product p);
    void delete_product(Product p);
    void update_product(Product p, Product new_p);
};
