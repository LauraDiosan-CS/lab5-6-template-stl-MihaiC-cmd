//
//  service.cpp
//  Lab_6
//
//  Created by Comsa Mihai on 06/04/2020.
//  Copyright © 2020 Comsa Mihai. All rights reserved.
//

#include "service.hpp"

Service::Service()
{
    
}

Service::Service(Repo &repo)
{
    this->repo = repo;
}

Service::~Service()
{
    
}

void Service::set_repo(Repo repo)
{
    this->repo = repo;
}

long Service::get_size()
{
    return this->repo.get_size();
}

vector<Product> Service::get_all()
{
    return this->repo.get_all();
}

void Service::add_product(int code, string name, int price)
{
    this->repo.add_product(Product(code, name, price));
}

void Service::update_product(int pos, int n_code, string n_name, int n_price)
{
    this->repo.update_product(this->repo.get_product_at_position(pos), Product(n_code, n_name, n_price));
}

void Service::delete_product(Product p)
{
    this->repo.delete_product(p);
}
