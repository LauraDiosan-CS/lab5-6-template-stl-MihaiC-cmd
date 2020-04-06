//
//  testRepo.cpp
//  Lab_6
//
//  Created by Comsa Mihai on 30/03/2020.
//  Copyright © 2020 Comsa Mihai. All rights reserved.
//

#include "testRepo.hpp"
#include "product.hpp"
#include "repo.hpp"
#include <stdio.h>
#include <ctime>
#include <vector>
#include <string>

void test_add()
{
    string name = "ciocolata";
    Product p(1, name, 6);
    Product m(2, name, 10);
    Product n(3, name, 3);
    
    Repo prod;
    
    assert(prod.get_size() == 0);
    prod.add_product(p);
    prod.add_product(m);
    prod.add_product(n);
    assert(prod.get_size() == 3);
}

void test_delete()
{
    string name = "Mylka";
    Product p(1, name, 6);
    Product m(2, name, 10);
    Product n(3, name, 3);
    
    Repo prod;
    
    prod.add_product(p);
    prod.add_product(m);
    prod.add_product(n);
    
    prod.delete_product(m);
    assert(prod.get_size() == 2);
    
    prod.delete_product(m);
    assert(prod.get_size() == 1);
}

void test_update()
{
    string name = "Mylka";
    Product p(1, name, 6);
    Product m(2, name, 10);
    Repo prod;
    
    prod.add_product(p);
    
    prod.update_product(p, m);
    assert(prod.get_all()[0] == m);
}

void test_repo()
{
    test_add();
    test_delete();
    test_update();
}
