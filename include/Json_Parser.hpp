// Copyright 2020 kropachevskiy <kropachev-95@mail.ru>

#ifndef INCLUDE_JSON_PARSER_HPP_
#define INCLUDE_JSON_PARSER_HPP_
#include <nlohmann/json.hpp>
#include <any>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iomanip>

const int Width[4] {14, 10, 12, 11}; // константа которая определяет ширину таблицу

struct Student {
    std::string name;
    std::any group;
    std::any avg;
    std::any debt;
};

std::string Get_Name(const nlohmann::json&); // гэтр (функции) которая в качетсве аргумента принимает константную ссылку типа json этот гэтр возвращает тип стринг

std::any Get_Group(const nlohmann::json&);

std::any Get_Avg(const nlohmann::json&);

std::any Get_Debt(const nlohmann::json&);

std::vector<Student> From_File(const std::string&); //

void Print(const Student&, std::ostream&); //метод для вывода таблицы

void Print(const std::vector<Student>&, std::ostream&); //

#endif  // INCLUDE_JSON_PARSER_HPP_