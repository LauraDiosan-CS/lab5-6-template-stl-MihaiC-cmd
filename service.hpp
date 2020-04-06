//
//  service.hpp
//  Lab_6
//
//  Created by Comsa Mihai on 06/04/2020.
//  Copyright © 2020 Comsa Mihai. All rights reserved.
//

#pragma once
#include "repo.hpp"
#include <vector>
#include <string>

class Service
{
private:
    Repo repo;
public:
    Service();
    Service(Repo &repo);
    ~Service();
    void set_repo(Repo repo);
    long get_size();
    //CRUD
    vector<Product> get_all();
    void add_product(int code, string name, int price);
    void update_product(int pos, int n_code, string n_name, int n_price);
    void delete_product(Product p);
};
