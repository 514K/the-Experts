#ifndef LIBRU1_H
#define LIBRU1_H
#include<QtGui>
QString prest(QString x, int k){
    int j = x.size();
    if (k == 1 || k == -32){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'б';continue;}
            if (x[i] == L'б') {x[i] = L'в';continue;}
            if (x[i] == L'в') {x[i] = L'г';continue;}
            if (x[i] == L'г') {x[i] = L'д';continue;}
            if (x[i] == L'д') {x[i] = L'е';continue;}
            if (x[i] == L'е') {x[i] = L'ё';continue;}
            if (x[i] == L'ё') {x[i] = L'ж';continue;}
            if (x[i] == L'ж') {x[i] = L'з';continue;}
            if (x[i] == L'з') {x[i] = L'и';continue;}
            if (x[i] == L'и') {x[i] = L'й';continue;}
            if (x[i] == L'й') {x[i] = L'к';continue;}
            if (x[i] == L'к') {x[i] = L'л';continue;}
            if (x[i] == L'л') {x[i] = L'м';continue;}
            if (x[i] == L'м') {x[i] = L'н';continue;}
            if (x[i] == L'н') {x[i] = L'о';continue;}
            if (x[i] == L'о') {x[i] = L'п';continue;}
            if (x[i] == L'п') {x[i] = L'р';continue;}
            if (x[i] == L'р') {x[i] = L'с';continue;}
            if (x[i] == L'с') {x[i] = L'т';continue;}
            if (x[i] == L'т') {x[i] = L'у';continue;}
            if (x[i] == L'у') {x[i] = L'ф';continue;}
            if (x[i] == L'ф') {x[i] = L'х';continue;}
            if (x[i] == L'х') {x[i] = L'ц';continue;}
            if (x[i] == L'ц') {x[i] = L'ч';continue;}
            if (x[i] == L'ч') {x[i] = L'ш';continue;}
            if (x[i] == L'ш') {x[i] = L'щ';continue;}
            if (x[i] == L'щ') {x[i] = L'ъ';continue;}
            if (x[i] == L'ъ') {x[i] = L'ы';continue;}
            if (x[i] == L'ы') {x[i] = L'ь';continue;}
            if (x[i] == L'ь') {x[i] = L'э';continue;}
            if (x[i] == L'э') {x[i] = L'ю';continue;}
            if (x[i] == L'ю') {x[i] = L'я';continue;}
            if (x[i] == L'я') {x[i] = L'а';continue;}
        }
    }
    if (k == 2 || k == -31){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'в';continue;}
            if (x[i] == L'б') {x[i] = L'г';continue;}
            if (x[i] == L'в') {x[i] = L'д';continue;}
            if (x[i] == L'г') {x[i] = L'е';continue;}
            if (x[i] == L'д') {x[i] = L'ё';continue;}
            if (x[i] == L'е') {x[i] = L'ж';continue;}
            if (x[i] == L'ё') {x[i] = L'з';continue;}
            if (x[i] == L'ж') {x[i] = L'и';continue;}
            if (x[i] == L'з') {x[i] = L'й';continue;}
            if (x[i] == L'и') {x[i] = L'к';continue;}
            if (x[i] == L'й') {x[i] = L'л';continue;}
            if (x[i] == L'к') {x[i] = L'м';continue;}
            if (x[i] == L'л') {x[i] = L'н';continue;}
            if (x[i] == L'м') {x[i] = L'о';continue;}
            if (x[i] == L'н') {x[i] = L'п';continue;}
            if (x[i] == L'о') {x[i] = L'р';continue;}
            if (x[i] == L'п') {x[i] = L'с';continue;}
            if (x[i] == L'р') {x[i] = L'т';continue;}
            if (x[i] == L'с') {x[i] = L'у';continue;}
            if (x[i] == L'т') {x[i] = L'ф';continue;}
            if (x[i] == L'у') {x[i] = L'х';continue;}
            if (x[i] == L'ф') {x[i] = L'ц';continue;}
            if (x[i] == L'х') {x[i] = L'ч';continue;}
            if (x[i] == L'ц') {x[i] = L'ш';continue;}
            if (x[i] == L'ч') {x[i] = L'щ';continue;}
            if (x[i] == L'ш') {x[i] = L'ъ';continue;}
            if (x[i] == L'щ') {x[i] = L'ы';continue;}
            if (x[i] == L'ъ') {x[i] = L'ь';continue;}
            if (x[i] == L'ы') {x[i] = L'э';continue;}
            if (x[i] == L'ь') {x[i] = L'ю';continue;}
            if (x[i] == L'э') {x[i] = L'я';continue;}
            if (x[i] == L'ю') {x[i] = L'а';continue;}
            if (x[i] == L'я') {x[i] = L'б';continue;}
        }
    }
    if (k == 3 || k == -30){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'г';continue;}
            if (x[i] == L'б') {x[i] = L'д';continue;}
            if (x[i] == L'в') {x[i] = L'е';continue;}
            if (x[i] == L'г') {x[i] = L'ё';continue;}
            if (x[i] == L'д') {x[i] = L'ж';continue;}
            if (x[i] == L'е') {x[i] = L'з';continue;}
            if (x[i] == L'ё') {x[i] = L'и';continue;}
            if (x[i] == L'ж') {x[i] = L'й';continue;}
            if (x[i] == L'з') {x[i] = L'к';continue;}
            if (x[i] == L'и') {x[i] = L'л';continue;}
            if (x[i] == L'й') {x[i] = L'м';continue;}
            if (x[i] == L'к') {x[i] = L'н';continue;}
            if (x[i] == L'л') {x[i] = L'о';continue;}
            if (x[i] == L'м') {x[i] = L'п';continue;}
            if (x[i] == L'н') {x[i] = L'р';continue;}
            if (x[i] == L'о') {x[i] = L'с';continue;}
            if (x[i] == L'п') {x[i] = L'т';continue;}
            if (x[i] == L'р') {x[i] = L'у';continue;}
            if (x[i] == L'с') {x[i] = L'ф';continue;}
            if (x[i] == L'т') {x[i] = L'х';continue;}
            if (x[i] == L'у') {x[i] = L'ц';continue;}
            if (x[i] == L'ф') {x[i] = L'ч';continue;}
            if (x[i] == L'х') {x[i] = L'ш';continue;}
            if (x[i] == L'ц') {x[i] = L'щ';continue;}
            if (x[i] == L'ч') {x[i] = L'ъ';continue;}
            if (x[i] == L'ш') {x[i] = L'ы';continue;}
            if (x[i] == L'щ') {x[i] = L'ь';continue;}
            if (x[i] == L'ъ') {x[i] = L'э';continue;}
            if (x[i] == L'ы') {x[i] = L'ю';continue;}
            if (x[i] == L'ь') {x[i] = L'я';continue;}
            if (x[i] == L'э') {x[i] = L'а';continue;}
            if (x[i] == L'ю') {x[i] = L'б';continue;}
            if (x[i] == L'я') {x[i] = L'в';continue;}
        }
    }
    if (k == 4 || k == -29){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'д';continue;}
            if (x[i] == L'б') {x[i] = L'е';continue;}
            if (x[i] == L'в') {x[i] = L'ё';continue;}
            if (x[i] == L'г') {x[i] = L'ж';continue;}
            if (x[i] == L'д') {x[i] = L'з';continue;}
            if (x[i] == L'е') {x[i] = L'и';continue;}
            if (x[i] == L'ё') {x[i] = L'й';continue;}
            if (x[i] == L'ж') {x[i] = L'к';continue;}
            if (x[i] == L'з') {x[i] = L'л';continue;}
            if (x[i] == L'и') {x[i] = L'м';continue;}
            if (x[i] == L'й') {x[i] = L'н';continue;}
            if (x[i] == L'к') {x[i] = L'о';continue;}
            if (x[i] == L'л') {x[i] = L'п';continue;}
            if (x[i] == L'м') {x[i] = L'р';continue;}
            if (x[i] == L'н') {x[i] = L'с';continue;}
            if (x[i] == L'о') {x[i] = L'т';continue;}
            if (x[i] == L'п') {x[i] = L'у';continue;}
            if (x[i] == L'р') {x[i] = L'ф';continue;}
            if (x[i] == L'с') {x[i] = L'х';continue;}
            if (x[i] == L'т') {x[i] = L'ц';continue;}
            if (x[i] == L'у') {x[i] = L'ч';continue;}
            if (x[i] == L'ф') {x[i] = L'ш';continue;}
            if (x[i] == L'х') {x[i] = L'щ';continue;}
            if (x[i] == L'ц') {x[i] = L'ъ';continue;}
            if (x[i] == L'ч') {x[i] = L'ы';continue;}
            if (x[i] == L'ш') {x[i] = L'ь';continue;}
            if (x[i] == L'щ') {x[i] = L'э';continue;}
            if (x[i] == L'ъ') {x[i] = L'ю';continue;}
            if (x[i] == L'ы') {x[i] = L'я';continue;}
            if (x[i] == L'ь') {x[i] = L'а';continue;}
            if (x[i] == L'э') {x[i] = L'б';continue;}
            if (x[i] == L'ю') {x[i] = L'в';continue;}
            if (x[i] == L'я') {x[i] = L'г';continue;}
        }
    }
    if (k == 5 || k == -28){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'е';continue;}
            if (x[i] == L'б') {x[i] = L'ё';continue;}
            if (x[i] == L'в') {x[i] = L'ж';continue;}
            if (x[i] == L'г') {x[i] = L'з';continue;}
            if (x[i] == L'д') {x[i] = L'и';continue;}
            if (x[i] == L'е') {x[i] = L'й';continue;}
            if (x[i] == L'ё') {x[i] = L'к';continue;}
            if (x[i] == L'ж') {x[i] = L'л';continue;}
            if (x[i] == L'з') {x[i] = L'м';continue;}
            if (x[i] == L'и') {x[i] = L'н';continue;}
            if (x[i] == L'й') {x[i] = L'о';continue;}
            if (x[i] == L'к') {x[i] = L'п';continue;}
            if (x[i] == L'л') {x[i] = L'р';continue;}
            if (x[i] == L'м') {x[i] = L'с';continue;}
            if (x[i] == L'н') {x[i] = L'т';continue;}
            if (x[i] == L'о') {x[i] = L'у';continue;}
            if (x[i] == L'п') {x[i] = L'ф';continue;}
            if (x[i] == L'р') {x[i] = L'х';continue;}
            if (x[i] == L'с') {x[i] = L'ц';continue;}
            if (x[i] == L'т') {x[i] = L'ч';continue;}
            if (x[i] == L'у') {x[i] = L'ш';continue;}
            if (x[i] == L'ф') {x[i] = L'щ';continue;}
            if (x[i] == L'х') {x[i] = L'ъ';continue;}
            if (x[i] == L'ц') {x[i] = L'ы';continue;}
            if (x[i] == L'ч') {x[i] = L'ь';continue;}
            if (x[i] == L'ш') {x[i] = L'э';continue;}
            if (x[i] == L'щ') {x[i] = L'ю';continue;}
            if (x[i] == L'ъ') {x[i] = L'я';continue;}
            if (x[i] == L'ы') {x[i] = L'а';continue;}
            if (x[i] == L'ь') {x[i] = L'б';continue;}
            if (x[i] == L'э') {x[i] = L'в';continue;}
            if (x[i] == L'ю') {x[i] = L'г';continue;}
            if (x[i] == L'я') {x[i] = L'д';continue;}
        }
    }
    if (k == 6 || k == -27){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ё';continue;}
            if (x[i] == L'б') {x[i] = L'ж';continue;}
            if (x[i] == L'в') {x[i] = L'з';continue;}
            if (x[i] == L'г') {x[i] = L'и';continue;}
            if (x[i] == L'д') {x[i] = L'й';continue;}
            if (x[i] == L'е') {x[i] = L'к';continue;}
            if (x[i] == L'ё') {x[i] = L'л';continue;}
            if (x[i] == L'ж') {x[i] = L'м';continue;}
            if (x[i] == L'з') {x[i] = L'н';continue;}
            if (x[i] == L'и') {x[i] = L'о';continue;}
            if (x[i] == L'й') {x[i] = L'п';continue;}
            if (x[i] == L'к') {x[i] = L'р';continue;}
            if (x[i] == L'л') {x[i] = L'с';continue;}
            if (x[i] == L'м') {x[i] = L'т';continue;}
            if (x[i] == L'н') {x[i] = L'у';continue;}
            if (x[i] == L'о') {x[i] = L'ф';continue;}
            if (x[i] == L'п') {x[i] = L'х';continue;}
            if (x[i] == L'р') {x[i] = L'ц';continue;}
            if (x[i] == L'с') {x[i] = L'ч';continue;}
            if (x[i] == L'т') {x[i] = L'ш';continue;}
            if (x[i] == L'у') {x[i] = L'щ';continue;}
            if (x[i] == L'ф') {x[i] = L'ъ';continue;}
            if (x[i] == L'х') {x[i] = L'ы';continue;}
            if (x[i] == L'ц') {x[i] = L'ь';continue;}
            if (x[i] == L'ч') {x[i] = L'э';continue;}
            if (x[i] == L'ш') {x[i] = L'ю';continue;}
            if (x[i] == L'щ') {x[i] = L'я';continue;}
            if (x[i] == L'ъ') {x[i] = L'а';continue;}
            if (x[i] == L'ы') {x[i] = L'б';continue;}
            if (x[i] == L'ь') {x[i] = L'в';continue;}
            if (x[i] == L'э') {x[i] = L'г';continue;}
            if (x[i] == L'ю') {x[i] = L'д';continue;}
            if (x[i] == L'я') {x[i] = L'е';continue;}
        }
    }
    if (k == 7 || k == -26){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ж';continue;}
            if (x[i] == L'б') {x[i] = L'з';continue;}
            if (x[i] == L'в') {x[i] = L'и';continue;}
            if (x[i] == L'г') {x[i] = L'й';continue;}
            if (x[i] == L'д') {x[i] = L'к';continue;}
            if (x[i] == L'е') {x[i] = L'л';continue;}
            if (x[i] == L'ё') {x[i] = L'м';continue;}
            if (x[i] == L'ж') {x[i] = L'н';continue;}
            if (x[i] == L'з') {x[i] = L'о';continue;}
            if (x[i] == L'и') {x[i] = L'п';continue;}
            if (x[i] == L'й') {x[i] = L'р';continue;}
            if (x[i] == L'к') {x[i] = L'с';continue;}
            if (x[i] == L'л') {x[i] = L'т';continue;}
            if (x[i] == L'м') {x[i] = L'у';continue;}
            if (x[i] == L'н') {x[i] = L'ф';continue;}
            if (x[i] == L'о') {x[i] = L'х';continue;}
            if (x[i] == L'п') {x[i] = L'ц';continue;}
            if (x[i] == L'р') {x[i] = L'ч';continue;}
            if (x[i] == L'с') {x[i] = L'ш';continue;}
            if (x[i] == L'т') {x[i] = L'щ';continue;}
            if (x[i] == L'у') {x[i] = L'ъ';continue;}
            if (x[i] == L'ф') {x[i] = L'ы';continue;}
            if (x[i] == L'х') {x[i] = L'ь';continue;}
            if (x[i] == L'ц') {x[i] = L'э';continue;}
            if (x[i] == L'ч') {x[i] = L'ю';continue;}
            if (x[i] == L'ш') {x[i] = L'я';continue;}
            if (x[i] == L'щ') {x[i] = L'а';continue;}
            if (x[i] == L'ъ') {x[i] = L'б';continue;}
            if (x[i] == L'ы') {x[i] = L'в';continue;}
            if (x[i] == L'ь') {x[i] = L'г';continue;}
            if (x[i] == L'э') {x[i] = L'д';continue;}
            if (x[i] == L'ю') {x[i] = L'е';continue;}
            if (x[i] == L'я') {x[i] = L'ё';continue;}
        }
    }
    if (k == 8 || k == -25){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'з';continue;}
            if (x[i] == L'б') {x[i] = L'и';continue;}
            if (x[i] == L'в') {x[i] = L'й';continue;}
            if (x[i] == L'г') {x[i] = L'к';continue;}
            if (x[i] == L'д') {x[i] = L'л';continue;}
            if (x[i] == L'е') {x[i] = L'м';continue;}
            if (x[i] == L'ё') {x[i] = L'н';continue;}
            if (x[i] == L'ж') {x[i] = L'о';continue;}
            if (x[i] == L'з') {x[i] = L'п';continue;}
            if (x[i] == L'и') {x[i] = L'р';continue;}
            if (x[i] == L'й') {x[i] = L'с';continue;}
            if (x[i] == L'к') {x[i] = L'т';continue;}
            if (x[i] == L'л') {x[i] = L'у';continue;}
            if (x[i] == L'м') {x[i] = L'ф';continue;}
            if (x[i] == L'н') {x[i] = L'х';continue;}
            if (x[i] == L'о') {x[i] = L'ц';continue;}
            if (x[i] == L'п') {x[i] = L'ч';continue;}
            if (x[i] == L'р') {x[i] = L'ш';continue;}
            if (x[i] == L'с') {x[i] = L'щ';continue;}
            if (x[i] == L'т') {x[i] = L'ъ';continue;}
            if (x[i] == L'у') {x[i] = L'ы';continue;}
            if (x[i] == L'ф') {x[i] = L'ь';continue;}
            if (x[i] == L'х') {x[i] = L'э';continue;}
            if (x[i] == L'ц') {x[i] = L'ю';continue;}
            if (x[i] == L'ч') {x[i] = L'я';continue;}
            if (x[i] == L'ш') {x[i] = L'а';continue;}
            if (x[i] == L'щ') {x[i] = L'б';continue;}
            if (x[i] == L'ъ') {x[i] = L'в';continue;}
            if (x[i] == L'ы') {x[i] = L'г';continue;}
            if (x[i] == L'ь') {x[i] = L'д';continue;}
            if (x[i] == L'э') {x[i] = L'е';continue;}
            if (x[i] == L'ю') {x[i] = L'ё';continue;}
            if (x[i] == L'я') {x[i] = L'ж';continue;}
        }
    }
    if (k == 9 || k == -24){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'и';continue;}
            if (x[i] == L'б') {x[i] = L'й';continue;}
            if (x[i] == L'в') {x[i] = L'к';continue;}
            if (x[i] == L'г') {x[i] = L'л';continue;}
            if (x[i] == L'д') {x[i] = L'м';continue;}
            if (x[i] == L'е') {x[i] = L'н';continue;}
            if (x[i] == L'ё') {x[i] = L'о';continue;}
            if (x[i] == L'ж') {x[i] = L'п';continue;}
            if (x[i] == L'з') {x[i] = L'р';continue;}
            if (x[i] == L'и') {x[i] = L'с';continue;}
            if (x[i] == L'й') {x[i] = L'т';continue;}
            if (x[i] == L'к') {x[i] = L'у';continue;}
            if (x[i] == L'л') {x[i] = L'ф';continue;}
            if (x[i] == L'м') {x[i] = L'х';continue;}
            if (x[i] == L'н') {x[i] = L'ц';continue;}
            if (x[i] == L'о') {x[i] = L'ч';continue;}
            if (x[i] == L'п') {x[i] = L'ш';continue;}
            if (x[i] == L'р') {x[i] = L'щ';continue;}
            if (x[i] == L'с') {x[i] = L'ъ';continue;}
            if (x[i] == L'т') {x[i] = L'ы';continue;}
            if (x[i] == L'у') {x[i] = L'ь';continue;}
            if (x[i] == L'ф') {x[i] = L'э';continue;}
            if (x[i] == L'х') {x[i] = L'ю';continue;}
            if (x[i] == L'ц') {x[i] = L'я';continue;}
            if (x[i] == L'ч') {x[i] = L'а';continue;}
            if (x[i] == L'ш') {x[i] = L'б';continue;}
            if (x[i] == L'щ') {x[i] = L'в';continue;}
            if (x[i] == L'ъ') {x[i] = L'г';continue;}
            if (x[i] == L'ы') {x[i] = L'д';continue;}
            if (x[i] == L'ь') {x[i] = L'е';continue;}
            if (x[i] == L'э') {x[i] = L'ё';continue;}
            if (x[i] == L'ю') {x[i] = L'ж';continue;}
            if (x[i] == L'я') {x[i] = L'з';continue;}
        }
    }
    if (k == 10 || k == -23){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'й';continue;}
            if (x[i] == L'б') {x[i] = L'к';continue;}
            if (x[i] == L'в') {x[i] = L'л';continue;}
            if (x[i] == L'г') {x[i] = L'м';continue;}
            if (x[i] == L'д') {x[i] = L'н';continue;}
            if (x[i] == L'е') {x[i] = L'о';continue;}
            if (x[i] == L'ё') {x[i] = L'п';continue;}
            if (x[i] == L'ж') {x[i] = L'р';continue;}
            if (x[i] == L'з') {x[i] = L'с';continue;}
            if (x[i] == L'и') {x[i] = L'т';continue;}
            if (x[i] == L'й') {x[i] = L'у';continue;}
            if (x[i] == L'к') {x[i] = L'ф';continue;}
            if (x[i] == L'л') {x[i] = L'х';continue;}
            if (x[i] == L'м') {x[i] = L'ц';continue;}
            if (x[i] == L'н') {x[i] = L'ч';continue;}
            if (x[i] == L'о') {x[i] = L'ш';continue;}
            if (x[i] == L'п') {x[i] = L'щ';continue;}
            if (x[i] == L'р') {x[i] = L'ъ';continue;}
            if (x[i] == L'с') {x[i] = L'ы';continue;}
            if (x[i] == L'т') {x[i] = L'ь';continue;}
            if (x[i] == L'у') {x[i] = L'э';continue;}
            if (x[i] == L'ф') {x[i] = L'ю';continue;}
            if (x[i] == L'х') {x[i] = L'я';continue;}
            if (x[i] == L'ц') {x[i] = L'а';continue;}
            if (x[i] == L'ч') {x[i] = L'б';continue;}
            if (x[i] == L'ш') {x[i] = L'в';continue;}
            if (x[i] == L'щ') {x[i] = L'г';continue;}
            if (x[i] == L'ъ') {x[i] = L'д';continue;}
            if (x[i] == L'ы') {x[i] = L'е';continue;}
            if (x[i] == L'ь') {x[i] = L'ё';continue;}
            if (x[i] == L'э') {x[i] = L'ж';continue;}
            if (x[i] == L'ю') {x[i] = L'з';continue;}
            if (x[i] == L'я') {x[i] = L'и';continue;}
        }
    }
    if (k == 11 || k == -22){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'к';continue;}
            if (x[i] == L'б') {x[i] = L'л';continue;}
            if (x[i] == L'в') {x[i] = L'м';continue;}
            if (x[i] == L'г') {x[i] = L'н';continue;}
            if (x[i] == L'д') {x[i] = L'о';continue;}
            if (x[i] == L'е') {x[i] = L'п';continue;}
            if (x[i] == L'ё') {x[i] = L'р';continue;}
            if (x[i] == L'ж') {x[i] = L'с';continue;}
            if (x[i] == L'з') {x[i] = L'т';continue;}
            if (x[i] == L'и') {x[i] = L'у';continue;}
            if (x[i] == L'й') {x[i] = L'ф';continue;}
            if (x[i] == L'к') {x[i] = L'х';continue;}
            if (x[i] == L'л') {x[i] = L'ц';continue;}
            if (x[i] == L'м') {x[i] = L'ч';continue;}
            if (x[i] == L'н') {x[i] = L'ш';continue;}
            if (x[i] == L'о') {x[i] = L'щ';continue;}
            if (x[i] == L'п') {x[i] = L'ъ';continue;}
            if (x[i] == L'р') {x[i] = L'ы';continue;}
            if (x[i] == L'с') {x[i] = L'ь';continue;}
            if (x[i] == L'т') {x[i] = L'э';continue;}
            if (x[i] == L'у') {x[i] = L'ю';continue;}
            if (x[i] == L'ф') {x[i] = L'я';continue;}
            if (x[i] == L'х') {x[i] = L'а';continue;}
            if (x[i] == L'ц') {x[i] = L'б';continue;}
            if (x[i] == L'ч') {x[i] = L'в';continue;}
            if (x[i] == L'ш') {x[i] = L'г';continue;}
            if (x[i] == L'щ') {x[i] = L'д';continue;}
            if (x[i] == L'ъ') {x[i] = L'е';continue;}
            if (x[i] == L'ы') {x[i] = L'ё';continue;}
            if (x[i] == L'ь') {x[i] = L'ж';continue;}
            if (x[i] == L'э') {x[i] = L'з';continue;}
            if (x[i] == L'ю') {x[i] = L'и';continue;}
            if (x[i] == L'я') {x[i] = L'й';continue;}
        }
    }
    if (k == 12 || k == -21){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'л';continue;}
            if (x[i] == L'б') {x[i] = L'м';continue;}
            if (x[i] == L'в') {x[i] = L'н';continue;}
            if (x[i] == L'г') {x[i] = L'о';continue;}
            if (x[i] == L'д') {x[i] = L'п';continue;}
            if (x[i] == L'е') {x[i] = L'р';continue;}
            if (x[i] == L'ё') {x[i] = L'с';continue;}
            if (x[i] == L'ж') {x[i] = L'т';continue;}
            if (x[i] == L'з') {x[i] = L'у';continue;}
            if (x[i] == L'и') {x[i] = L'ф';continue;}
            if (x[i] == L'й') {x[i] = L'х';continue;}
            if (x[i] == L'к') {x[i] = L'ц';continue;}
            if (x[i] == L'л') {x[i] = L'ч';continue;}
            if (x[i] == L'м') {x[i] = L'ш';continue;}
            if (x[i] == L'н') {x[i] = L'щ';continue;}
            if (x[i] == L'о') {x[i] = L'ъ';continue;}
            if (x[i] == L'п') {x[i] = L'ы';continue;}
            if (x[i] == L'р') {x[i] = L'ь';continue;}
            if (x[i] == L'с') {x[i] = L'э';continue;}
            if (x[i] == L'т') {x[i] = L'ю';continue;}
            if (x[i] == L'у') {x[i] = L'я';continue;}
            if (x[i] == L'ф') {x[i] = L'а';continue;}
            if (x[i] == L'х') {x[i] = L'б';continue;}
            if (x[i] == L'ц') {x[i] = L'в';continue;}
            if (x[i] == L'ч') {x[i] = L'г';continue;}
            if (x[i] == L'ш') {x[i] = L'д';continue;}
            if (x[i] == L'щ') {x[i] = L'е';continue;}
            if (x[i] == L'ъ') {x[i] = L'ё';continue;}
            if (x[i] == L'ы') {x[i] = L'ж';continue;}
            if (x[i] == L'ь') {x[i] = L'з';continue;}
            if (x[i] == L'э') {x[i] = L'и';continue;}
            if (x[i] == L'ю') {x[i] = L'й';continue;}
            if (x[i] == L'я') {x[i] = L'к';continue;}
        }
    }
    if (k == 13 || k == -20){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'м';continue;}
            if (x[i] == L'б') {x[i] = L'н';continue;}
            if (x[i] == L'в') {x[i] = L'о';continue;}
            if (x[i] == L'г') {x[i] = L'п';continue;}
            if (x[i] == L'д') {x[i] = L'р';continue;}
            if (x[i] == L'е') {x[i] = L'с';continue;}
            if (x[i] == L'ё') {x[i] = L'т';continue;}
            if (x[i] == L'ж') {x[i] = L'у';continue;}
            if (x[i] == L'з') {x[i] = L'ф';continue;}
            if (x[i] == L'и') {x[i] = L'х';continue;}
            if (x[i] == L'й') {x[i] = L'ц';continue;}
            if (x[i] == L'к') {x[i] = L'ч';continue;}
            if (x[i] == L'л') {x[i] = L'ш';continue;}
            if (x[i] == L'м') {x[i] = L'щ';continue;}
            if (x[i] == L'н') {x[i] = L'ъ';continue;}
            if (x[i] == L'о') {x[i] = L'ы';continue;}
            if (x[i] == L'п') {x[i] = L'ь';continue;}
            if (x[i] == L'р') {x[i] = L'э';continue;}
            if (x[i] == L'с') {x[i] = L'ю';continue;}
            if (x[i] == L'т') {x[i] = L'я';continue;}
            if (x[i] == L'у') {x[i] = L'а';continue;}
            if (x[i] == L'ф') {x[i] = L'б';continue;}
            if (x[i] == L'х') {x[i] = L'в';continue;}
            if (x[i] == L'ц') {x[i] = L'г';continue;}
            if (x[i] == L'ч') {x[i] = L'д';continue;}
            if (x[i] == L'ш') {x[i] = L'е';continue;}
            if (x[i] == L'щ') {x[i] = L'ё';continue;}
            if (x[i] == L'ъ') {x[i] = L'ж';continue;}
            if (x[i] == L'ы') {x[i] = L'з';continue;}
            if (x[i] == L'ь') {x[i] = L'и';continue;}
            if (x[i] == L'э') {x[i] = L'й';continue;}
            if (x[i] == L'ю') {x[i] = L'к';continue;}
            if (x[i] == L'я') {x[i] = L'л';continue;}
        }
    }
    if (k == 14 || k == -19){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'н';continue;}
            if (x[i] == L'б') {x[i] = L'о';continue;}
            if (x[i] == L'в') {x[i] = L'п';continue;}
            if (x[i] == L'г') {x[i] = L'р';continue;}
            if (x[i] == L'д') {x[i] = L'с';continue;}
            if (x[i] == L'е') {x[i] = L'т';continue;}
            if (x[i] == L'ё') {x[i] = L'у';continue;}
            if (x[i] == L'ж') {x[i] = L'ф';continue;}
            if (x[i] == L'з') {x[i] = L'х';continue;}
            if (x[i] == L'и') {x[i] = L'ц';continue;}
            if (x[i] == L'й') {x[i] = L'ч';continue;}
            if (x[i] == L'к') {x[i] = L'ш';continue;}
            if (x[i] == L'л') {x[i] = L'щ';continue;}
            if (x[i] == L'м') {x[i] = L'ъ';continue;}
            if (x[i] == L'н') {x[i] = L'ы';continue;}
            if (x[i] == L'о') {x[i] = L'ь';continue;}
            if (x[i] == L'п') {x[i] = L'э';continue;}
            if (x[i] == L'р') {x[i] = L'ю';continue;}
            if (x[i] == L'с') {x[i] = L'я';continue;}
            if (x[i] == L'т') {x[i] = L'а';continue;}
            if (x[i] == L'у') {x[i] = L'б';continue;}
            if (x[i] == L'ф') {x[i] = L'в';continue;}
            if (x[i] == L'х') {x[i] = L'г';continue;}
            if (x[i] == L'ц') {x[i] = L'д';continue;}
            if (x[i] == L'ч') {x[i] = L'е';continue;}
            if (x[i] == L'ш') {x[i] = L'ё';continue;}
            if (x[i] == L'щ') {x[i] = L'ж';continue;}
            if (x[i] == L'ъ') {x[i] = L'з';continue;}
            if (x[i] == L'ы') {x[i] = L'и';continue;}
            if (x[i] == L'ь') {x[i] = L'й';continue;}
            if (x[i] == L'э') {x[i] = L'к';continue;}
            if (x[i] == L'ю') {x[i] = L'л';continue;}
            if (x[i] == L'я') {x[i] = L'м';continue;}
        }
    }
    if (k == 15 || k == -18){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'о';continue;}
            if (x[i] == L'б') {x[i] = L'п';continue;}
            if (x[i] == L'в') {x[i] = L'р';continue;}
            if (x[i] == L'г') {x[i] = L'с';continue;}
            if (x[i] == L'д') {x[i] = L'т';continue;}
            if (x[i] == L'е') {x[i] = L'у';continue;}
            if (x[i] == L'ё') {x[i] = L'ф';continue;}
            if (x[i] == L'ж') {x[i] = L'х';continue;}
            if (x[i] == L'з') {x[i] = L'ц';continue;}
            if (x[i] == L'и') {x[i] = L'ч';continue;}
            if (x[i] == L'й') {x[i] = L'ш';continue;}
            if (x[i] == L'к') {x[i] = L'щ';continue;}
            if (x[i] == L'л') {x[i] = L'ъ';continue;}
            if (x[i] == L'м') {x[i] = L'ы';continue;}
            if (x[i] == L'н') {x[i] = L'ь';continue;}
            if (x[i] == L'о') {x[i] = L'э';continue;}
            if (x[i] == L'п') {x[i] = L'ю';continue;}
            if (x[i] == L'р') {x[i] = L'я';continue;}
            if (x[i] == L'с') {x[i] = L'а';continue;}
            if (x[i] == L'т') {x[i] = L'б';continue;}
            if (x[i] == L'у') {x[i] = L'в';continue;}
            if (x[i] == L'ф') {x[i] = L'г';continue;}
            if (x[i] == L'х') {x[i] = L'д';continue;}
            if (x[i] == L'ц') {x[i] = L'е';continue;}
            if (x[i] == L'ч') {x[i] = L'ё';continue;}
            if (x[i] == L'ш') {x[i] = L'ж';continue;}
            if (x[i] == L'щ') {x[i] = L'з';continue;}
            if (x[i] == L'ъ') {x[i] = L'и';continue;}
            if (x[i] == L'ы') {x[i] = L'й';continue;}
            if (x[i] == L'ь') {x[i] = L'к';continue;}
            if (x[i] == L'э') {x[i] = L'л';continue;}
            if (x[i] == L'ю') {x[i] = L'м';continue;}
            if (x[i] == L'я') {x[i] = L'н';continue;}
        }
    }
    if (k == 16 || k == -17){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'п';continue;}
            if (x[i] == L'б') {x[i] = L'р';continue;}
            if (x[i] == L'в') {x[i] = L'с';continue;}
            if (x[i] == L'г') {x[i] = L'т';continue;}
            if (x[i] == L'д') {x[i] = L'у';continue;}
            if (x[i] == L'е') {x[i] = L'ф';continue;}
            if (x[i] == L'ё') {x[i] = L'х';continue;}
            if (x[i] == L'ж') {x[i] = L'ц';continue;}
            if (x[i] == L'з') {x[i] = L'ч';continue;}
            if (x[i] == L'и') {x[i] = L'ш';continue;}
            if (x[i] == L'й') {x[i] = L'щ';continue;}
            if (x[i] == L'к') {x[i] = L'ъ';continue;}
            if (x[i] == L'л') {x[i] = L'ы';continue;}
            if (x[i] == L'м') {x[i] = L'ь';continue;}
            if (x[i] == L'н') {x[i] = L'э';continue;}
            if (x[i] == L'о') {x[i] = L'ю';continue;}
            if (x[i] == L'п') {x[i] = L'я';continue;}
            if (x[i] == L'р') {x[i] = L'а';continue;}
            if (x[i] == L'с') {x[i] = L'б';continue;}
            if (x[i] == L'т') {x[i] = L'в';continue;}
            if (x[i] == L'у') {x[i] = L'г';continue;}
            if (x[i] == L'ф') {x[i] = L'д';continue;}
            if (x[i] == L'х') {x[i] = L'е';continue;}
            if (x[i] == L'ц') {x[i] = L'ё';continue;}
            if (x[i] == L'ч') {x[i] = L'ж';continue;}
            if (x[i] == L'ш') {x[i] = L'з';continue;}
            if (x[i] == L'щ') {x[i] = L'и';continue;}
            if (x[i] == L'ъ') {x[i] = L'й';continue;}
            if (x[i] == L'ы') {x[i] = L'к';continue;}
            if (x[i] == L'ь') {x[i] = L'л';continue;}
            if (x[i] == L'э') {x[i] = L'м';continue;}
            if (x[i] == L'ю') {x[i] = L'н';continue;}
            if (x[i] == L'я') {x[i] = L'о';continue;}
        }
    }
    if (k == 17 || k == -16){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'р';continue;}
            if (x[i] == L'б') {x[i] = L'с';continue;}
            if (x[i] == L'в') {x[i] = L'т';continue;}
            if (x[i] == L'г') {x[i] = L'у';continue;}
            if (x[i] == L'д') {x[i] = L'ф';continue;}
            if (x[i] == L'е') {x[i] = L'х';continue;}
            if (x[i] == L'ё') {x[i] = L'ц';continue;}
            if (x[i] == L'ж') {x[i] = L'ч';continue;}
            if (x[i] == L'з') {x[i] = L'ш';continue;}
            if (x[i] == L'и') {x[i] = L'щ';continue;}
            if (x[i] == L'й') {x[i] = L'ъ';continue;}
            if (x[i] == L'к') {x[i] = L'ы';continue;}
            if (x[i] == L'л') {x[i] = L'ь';continue;}
            if (x[i] == L'м') {x[i] = L'э';continue;}
            if (x[i] == L'н') {x[i] = L'ю';continue;}
            if (x[i] == L'о') {x[i] = L'я';continue;}
            if (x[i] == L'п') {x[i] = L'а';continue;}
            if (x[i] == L'р') {x[i] = L'б';continue;}
            if (x[i] == L'с') {x[i] = L'в';continue;}
            if (x[i] == L'т') {x[i] = L'г';continue;}
            if (x[i] == L'у') {x[i] = L'д';continue;}
            if (x[i] == L'ф') {x[i] = L'е';continue;}
            if (x[i] == L'х') {x[i] = L'ё';continue;}
            if (x[i] == L'ц') {x[i] = L'ж';continue;}
            if (x[i] == L'ч') {x[i] = L'з';continue;}
            if (x[i] == L'ш') {x[i] = L'и';continue;}
            if (x[i] == L'щ') {x[i] = L'й';continue;}
            if (x[i] == L'ъ') {x[i] = L'к';continue;}
            if (x[i] == L'ы') {x[i] = L'л';continue;}
            if (x[i] == L'ь') {x[i] = L'м';continue;}
            if (x[i] == L'э') {x[i] = L'н';continue;}
            if (x[i] == L'ю') {x[i] = L'о';continue;}
            if (x[i] == L'я') {x[i] = L'п';continue;}
        }
    }
    if (k == 18 || k == -15){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'с';continue;}
            if (x[i] == L'б') {x[i] = L'т';continue;}
            if (x[i] == L'в') {x[i] = L'у';continue;}
            if (x[i] == L'г') {x[i] = L'ф';continue;}
            if (x[i] == L'д') {x[i] = L'х';continue;}
            if (x[i] == L'е') {x[i] = L'ц';continue;}
            if (x[i] == L'ё') {x[i] = L'ч';continue;}
            if (x[i] == L'ж') {x[i] = L'ш';continue;}
            if (x[i] == L'з') {x[i] = L'щ';continue;}
            if (x[i] == L'и') {x[i] = L'ъ';continue;}
            if (x[i] == L'й') {x[i] = L'ы';continue;}
            if (x[i] == L'к') {x[i] = L'ь';continue;}
            if (x[i] == L'л') {x[i] = L'э';continue;}
            if (x[i] == L'м') {x[i] = L'ю';continue;}
            if (x[i] == L'н') {x[i] = L'я';continue;}
            if (x[i] == L'о') {x[i] = L'а';continue;}
            if (x[i] == L'п') {x[i] = L'б';continue;}
            if (x[i] == L'р') {x[i] = L'в';continue;}
            if (x[i] == L'с') {x[i] = L'г';continue;}
            if (x[i] == L'т') {x[i] = L'д';continue;}
            if (x[i] == L'у') {x[i] = L'е';continue;}
            if (x[i] == L'ф') {x[i] = L'ё';continue;}
            if (x[i] == L'х') {x[i] = L'ж';continue;}
            if (x[i] == L'ц') {x[i] = L'з';continue;}
            if (x[i] == L'ч') {x[i] = L'и';continue;}
            if (x[i] == L'ш') {x[i] = L'й';continue;}
            if (x[i] == L'щ') {x[i] = L'к';continue;}
            if (x[i] == L'ъ') {x[i] = L'л';continue;}
            if (x[i] == L'ы') {x[i] = L'м';continue;}
            if (x[i] == L'ь') {x[i] = L'н';continue;}
            if (x[i] == L'э') {x[i] = L'о';continue;}
            if (x[i] == L'ю') {x[i] = L'п';continue;}
            if (x[i] == L'я') {x[i] = L'р';continue;}
        }
    }
    if (k == 19 || k == -14){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'т';continue;}
            if (x[i] == L'б') {x[i] = L'у';continue;}
            if (x[i] == L'в') {x[i] = L'ф';continue;}
            if (x[i] == L'г') {x[i] = L'х';continue;}
            if (x[i] == L'д') {x[i] = L'ц';continue;}
            if (x[i] == L'е') {x[i] = L'ч';continue;}
            if (x[i] == L'ё') {x[i] = L'ш';continue;}
            if (x[i] == L'ж') {x[i] = L'щ';continue;}
            if (x[i] == L'з') {x[i] = L'ъ';continue;}
            if (x[i] == L'и') {x[i] = L'ы';continue;}
            if (x[i] == L'й') {x[i] = L'ь';continue;}
            if (x[i] == L'к') {x[i] = L'э';continue;}
            if (x[i] == L'л') {x[i] = L'ю';continue;}
            if (x[i] == L'м') {x[i] = L'я';continue;}
            if (x[i] == L'н') {x[i] = L'а';continue;}
            if (x[i] == L'о') {x[i] = L'б';continue;}
            if (x[i] == L'п') {x[i] = L'в';continue;}
            if (x[i] == L'р') {x[i] = L'г';continue;}
            if (x[i] == L'с') {x[i] = L'д';continue;}
            if (x[i] == L'т') {x[i] = L'е';continue;}
            if (x[i] == L'у') {x[i] = L'ё';continue;}
            if (x[i] == L'ф') {x[i] = L'ж';continue;}
            if (x[i] == L'х') {x[i] = L'з';continue;}
            if (x[i] == L'ц') {x[i] = L'и';continue;}
            if (x[i] == L'ч') {x[i] = L'й';continue;}
            if (x[i] == L'ш') {x[i] = L'к';continue;}
            if (x[i] == L'щ') {x[i] = L'л';continue;}
            if (x[i] == L'ъ') {x[i] = L'м';continue;}
            if (x[i] == L'ы') {x[i] = L'н';continue;}
            if (x[i] == L'ь') {x[i] = L'о';continue;}
            if (x[i] == L'э') {x[i] = L'п';continue;}
            if (x[i] == L'ю') {x[i] = L'р';continue;}
            if (x[i] == L'я') {x[i] = L'с';continue;}
        }
    }
    if (k == 20 || k == -13){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'у';continue;}
            if (x[i] == L'б') {x[i] = L'ф';continue;}
            if (x[i] == L'в') {x[i] = L'х';continue;}
            if (x[i] == L'г') {x[i] = L'ц';continue;}
            if (x[i] == L'д') {x[i] = L'ч';continue;}
            if (x[i] == L'е') {x[i] = L'ш';continue;}
            if (x[i] == L'ё') {x[i] = L'щ';continue;}
            if (x[i] == L'ж') {x[i] = L'ъ';continue;}
            if (x[i] == L'з') {x[i] = L'ы';continue;}
            if (x[i] == L'и') {x[i] = L'ь';continue;}
            if (x[i] == L'й') {x[i] = L'э';continue;}
            if (x[i] == L'к') {x[i] = L'ю';continue;}
            if (x[i] == L'л') {x[i] = L'я';continue;}
            if (x[i] == L'м') {x[i] = L'а';continue;}
            if (x[i] == L'н') {x[i] = L'б';continue;}
            if (x[i] == L'о') {x[i] = L'в';continue;}
            if (x[i] == L'п') {x[i] = L'г';continue;}
            if (x[i] == L'р') {x[i] = L'д';continue;}
            if (x[i] == L'с') {x[i] = L'е';continue;}
            if (x[i] == L'т') {x[i] = L'ё';continue;}
            if (x[i] == L'у') {x[i] = L'ж';continue;}
            if (x[i] == L'ф') {x[i] = L'з';continue;}
            if (x[i] == L'х') {x[i] = L'и';continue;}
            if (x[i] == L'ц') {x[i] = L'й';continue;}
            if (x[i] == L'ч') {x[i] = L'к';continue;}
            if (x[i] == L'ш') {x[i] = L'л';continue;}
            if (x[i] == L'щ') {x[i] = L'м';continue;}
            if (x[i] == L'ъ') {x[i] = L'н';continue;}
            if (x[i] == L'ы') {x[i] = L'о';continue;}
            if (x[i] == L'ь') {x[i] = L'п';continue;}
            if (x[i] == L'э') {x[i] = L'р';continue;}
            if (x[i] == L'ю') {x[i] = L'с';continue;}
            if (x[i] == L'я') {x[i] = L'т';continue;}
        }
    }
    if (k == 21 || k == -12){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ф';continue;}
            if (x[i] == L'б') {x[i] = L'х';continue;}
            if (x[i] == L'в') {x[i] = L'ц';continue;}
            if (x[i] == L'г') {x[i] = L'ч';continue;}
            if (x[i] == L'д') {x[i] = L'ш';continue;}
            if (x[i] == L'е') {x[i] = L'щ';continue;}
            if (x[i] == L'ё') {x[i] = L'ъ';continue;}
            if (x[i] == L'ж') {x[i] = L'ы';continue;}
            if (x[i] == L'з') {x[i] = L'ь';continue;}
            if (x[i] == L'и') {x[i] = L'э';continue;}
            if (x[i] == L'й') {x[i] = L'ю';continue;}
            if (x[i] == L'к') {x[i] = L'я';continue;}
            if (x[i] == L'л') {x[i] = L'а';continue;}
            if (x[i] == L'м') {x[i] = L'б';continue;}
            if (x[i] == L'н') {x[i] = L'в';continue;}
            if (x[i] == L'о') {x[i] = L'г';continue;}
            if (x[i] == L'п') {x[i] = L'д';continue;}
            if (x[i] == L'р') {x[i] = L'е';continue;}
            if (x[i] == L'с') {x[i] = L'ё';continue;}
            if (x[i] == L'т') {x[i] = L'ж';continue;}
            if (x[i] == L'у') {x[i] = L'з';continue;}
            if (x[i] == L'ф') {x[i] = L'и';continue;}
            if (x[i] == L'х') {x[i] = L'й';continue;}
            if (x[i] == L'ц') {x[i] = L'к';continue;}
            if (x[i] == L'ч') {x[i] = L'л';continue;}
            if (x[i] == L'ш') {x[i] = L'м';continue;}
            if (x[i] == L'щ') {x[i] = L'н';continue;}
            if (x[i] == L'ъ') {x[i] = L'о';continue;}
            if (x[i] == L'ы') {x[i] = L'п';continue;}
            if (x[i] == L'ь') {x[i] = L'р';continue;}
            if (x[i] == L'э') {x[i] = L'с';continue;}
            if (x[i] == L'ю') {x[i] = L'т';continue;}
            if (x[i] == L'я') {x[i] = L'у';continue;}
        }
    }
    if (k == 22 || k == -11){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'х';continue;}
            if (x[i] == L'б') {x[i] = L'ц';continue;}
            if (x[i] == L'в') {x[i] = L'ч';continue;}
            if (x[i] == L'г') {x[i] = L'ш';continue;}
            if (x[i] == L'д') {x[i] = L'щ';continue;}
            if (x[i] == L'е') {x[i] = L'ъ';continue;}
            if (x[i] == L'ё') {x[i] = L'ы';continue;}
            if (x[i] == L'ж') {x[i] = L'ь';continue;}
            if (x[i] == L'з') {x[i] = L'э';continue;}
            if (x[i] == L'и') {x[i] = L'ю';continue;}
            if (x[i] == L'й') {x[i] = L'я';continue;}
            if (x[i] == L'к') {x[i] = L'а';continue;}
            if (x[i] == L'л') {x[i] = L'б';continue;}
            if (x[i] == L'м') {x[i] = L'в';continue;}
            if (x[i] == L'н') {x[i] = L'г';continue;}
            if (x[i] == L'о') {x[i] = L'д';continue;}
            if (x[i] == L'п') {x[i] = L'е';continue;}
            if (x[i] == L'р') {x[i] = L'ё';continue;}
            if (x[i] == L'с') {x[i] = L'ж';continue;}
            if (x[i] == L'т') {x[i] = L'з';continue;}
            if (x[i] == L'у') {x[i] = L'и';continue;}
            if (x[i] == L'ф') {x[i] = L'й';continue;}
            if (x[i] == L'х') {x[i] = L'к';continue;}
            if (x[i] == L'ц') {x[i] = L'л';continue;}
            if (x[i] == L'ч') {x[i] = L'м';continue;}
            if (x[i] == L'ш') {x[i] = L'н';continue;}
            if (x[i] == L'щ') {x[i] = L'о';continue;}
            if (x[i] == L'ъ') {x[i] = L'п';continue;}
            if (x[i] == L'ы') {x[i] = L'р';continue;}
            if (x[i] == L'ь') {x[i] = L'с';continue;}
            if (x[i] == L'э') {x[i] = L'т';continue;}
            if (x[i] == L'ю') {x[i] = L'у';continue;}
            if (x[i] == L'я') {x[i] = L'ф';continue;}
        }
    }
    if (k == 23 || k == -10){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ц';continue;}
            if (x[i] == L'б') {x[i] = L'ч';continue;}
            if (x[i] == L'в') {x[i] = L'ш';continue;}
            if (x[i] == L'г') {x[i] = L'щ';continue;}
            if (x[i] == L'д') {x[i] = L'ъ';continue;}
            if (x[i] == L'е') {x[i] = L'ы';continue;}
            if (x[i] == L'ё') {x[i] = L'ь';continue;}
            if (x[i] == L'ж') {x[i] = L'э';continue;}
            if (x[i] == L'з') {x[i] = L'ю';continue;}
            if (x[i] == L'и') {x[i] = L'я';continue;}
            if (x[i] == L'й') {x[i] = L'а';continue;}
            if (x[i] == L'к') {x[i] = L'б';continue;}
            if (x[i] == L'л') {x[i] = L'в';continue;}
            if (x[i] == L'м') {x[i] = L'г';continue;}
            if (x[i] == L'н') {x[i] = L'д';continue;}
            if (x[i] == L'о') {x[i] = L'е';continue;}
            if (x[i] == L'п') {x[i] = L'ё';continue;}
            if (x[i] == L'р') {x[i] = L'ж';continue;}
            if (x[i] == L'с') {x[i] = L'з';continue;}
            if (x[i] == L'т') {x[i] = L'и';continue;}
            if (x[i] == L'у') {x[i] = L'й';continue;}
            if (x[i] == L'ф') {x[i] = L'к';continue;}
            if (x[i] == L'х') {x[i] = L'л';continue;}
            if (x[i] == L'ц') {x[i] = L'м';continue;}
            if (x[i] == L'ч') {x[i] = L'н';continue;}
            if (x[i] == L'ш') {x[i] = L'о';continue;}
            if (x[i] == L'щ') {x[i] = L'п';continue;}
            if (x[i] == L'ъ') {x[i] = L'р';continue;}
            if (x[i] == L'ы') {x[i] = L'с';continue;}
            if (x[i] == L'ь') {x[i] = L'т';continue;}
            if (x[i] == L'э') {x[i] = L'у';continue;}
            if (x[i] == L'ю') {x[i] = L'ф';continue;}
            if (x[i] == L'я') {x[i] = L'х';continue;}
        }
    }
    if (k == 24 || k == -9){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ч';continue;}
            if (x[i] == L'б') {x[i] = L'ш';continue;}
            if (x[i] == L'в') {x[i] = L'щ';continue;}
            if (x[i] == L'г') {x[i] = L'ъ';continue;}
            if (x[i] == L'д') {x[i] = L'ы';continue;}
            if (x[i] == L'е') {x[i] = L'ь';continue;}
            if (x[i] == L'ё') {x[i] = L'э';continue;}
            if (x[i] == L'ж') {x[i] = L'ю';continue;}
            if (x[i] == L'з') {x[i] = L'я';continue;}
            if (x[i] == L'и') {x[i] = L'а';continue;}
            if (x[i] == L'й') {x[i] = L'б';continue;}
            if (x[i] == L'к') {x[i] = L'в';continue;}
            if (x[i] == L'л') {x[i] = L'г';continue;}
            if (x[i] == L'м') {x[i] = L'д';continue;}
            if (x[i] == L'н') {x[i] = L'е';continue;}
            if (x[i] == L'о') {x[i] = L'ё';continue;}
            if (x[i] == L'п') {x[i] = L'ж';continue;}
            if (x[i] == L'р') {x[i] = L'з';continue;}
            if (x[i] == L'с') {x[i] = L'и';continue;}
            if (x[i] == L'т') {x[i] = L'й';continue;}
            if (x[i] == L'у') {x[i] = L'к';continue;}
            if (x[i] == L'ф') {x[i] = L'л';continue;}
            if (x[i] == L'х') {x[i] = L'м';continue;}
            if (x[i] == L'ц') {x[i] = L'н';continue;}
            if (x[i] == L'ч') {x[i] = L'о';continue;}
            if (x[i] == L'ш') {x[i] = L'п';continue;}
            if (x[i] == L'щ') {x[i] = L'р';continue;}
            if (x[i] == L'ъ') {x[i] = L'с';continue;}
            if (x[i] == L'ы') {x[i] = L'т';continue;}
            if (x[i] == L'ь') {x[i] = L'у';continue;}
            if (x[i] == L'э') {x[i] = L'ф';continue;}
            if (x[i] == L'ю') {x[i] = L'х';continue;}
            if (x[i] == L'я') {x[i] = L'ц';continue;}
        }
    }
    if (k == 25 || k == -8){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ш';continue;}
            if (x[i] == L'б') {x[i] = L'щ';continue;}
            if (x[i] == L'в') {x[i] = L'ъ';continue;}
            if (x[i] == L'г') {x[i] = L'ы';continue;}
            if (x[i] == L'д') {x[i] = L'ь';continue;}
            if (x[i] == L'е') {x[i] = L'э';continue;}
            if (x[i] == L'ё') {x[i] = L'ю';continue;}
            if (x[i] == L'ж') {x[i] = L'я';continue;}
            if (x[i] == L'з') {x[i] = L'а';continue;}
            if (x[i] == L'и') {x[i] = L'б';continue;}
            if (x[i] == L'й') {x[i] = L'в';continue;}
            if (x[i] == L'к') {x[i] = L'г';continue;}
            if (x[i] == L'л') {x[i] = L'д';continue;}
            if (x[i] == L'м') {x[i] = L'е';continue;}
            if (x[i] == L'н') {x[i] = L'ё';continue;}
            if (x[i] == L'о') {x[i] = L'ж';continue;}
            if (x[i] == L'п') {x[i] = L'з';continue;}
            if (x[i] == L'р') {x[i] = L'и';continue;}
            if (x[i] == L'с') {x[i] = L'й';continue;}
            if (x[i] == L'т') {x[i] = L'к';continue;}
            if (x[i] == L'у') {x[i] = L'л';continue;}
            if (x[i] == L'ф') {x[i] = L'м';continue;}
            if (x[i] == L'х') {x[i] = L'н';continue;}
            if (x[i] == L'ц') {x[i] = L'о';continue;}
            if (x[i] == L'ч') {x[i] = L'п';continue;}
            if (x[i] == L'ш') {x[i] = L'р';continue;}
            if (x[i] == L'щ') {x[i] = L'с';continue;}
            if (x[i] == L'ъ') {x[i] = L'т';continue;}
            if (x[i] == L'ы') {x[i] = L'у';continue;}
            if (x[i] == L'ь') {x[i] = L'ф';continue;}
            if (x[i] == L'э') {x[i] = L'х';continue;}
            if (x[i] == L'ю') {x[i] = L'ц';continue;}
            if (x[i] == L'я') {x[i] = L'ч';continue;}
        }
    }
    if (k == 26 || k == -7){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'щ';continue;}
            if (x[i] == L'б') {x[i] = L'ъ';continue;}
            if (x[i] == L'в') {x[i] = L'ы';continue;}
            if (x[i] == L'г') {x[i] = L'ь';continue;}
            if (x[i] == L'д') {x[i] = L'э';continue;}
            if (x[i] == L'е') {x[i] = L'ю';continue;}
            if (x[i] == L'ё') {x[i] = L'я';continue;}
            if (x[i] == L'ж') {x[i] = L'а';continue;}
            if (x[i] == L'з') {x[i] = L'б';continue;}
            if (x[i] == L'и') {x[i] = L'в';continue;}
            if (x[i] == L'й') {x[i] = L'г';continue;}
            if (x[i] == L'к') {x[i] = L'д';continue;}
            if (x[i] == L'л') {x[i] = L'е';continue;}
            if (x[i] == L'м') {x[i] = L'ё';continue;}
            if (x[i] == L'н') {x[i] = L'ж';continue;}
            if (x[i] == L'о') {x[i] = L'з';continue;}
            if (x[i] == L'п') {x[i] = L'и';continue;}
            if (x[i] == L'р') {x[i] = L'й';continue;}
            if (x[i] == L'с') {x[i] = L'к';continue;}
            if (x[i] == L'т') {x[i] = L'л';continue;}
            if (x[i] == L'у') {x[i] = L'м';continue;}
            if (x[i] == L'ф') {x[i] = L'н';continue;}
            if (x[i] == L'х') {x[i] = L'о';continue;}
            if (x[i] == L'ц') {x[i] = L'п';continue;}
            if (x[i] == L'ч') {x[i] = L'р';continue;}
            if (x[i] == L'ш') {x[i] = L'с';continue;}
            if (x[i] == L'щ') {x[i] = L'т';continue;}
            if (x[i] == L'ъ') {x[i] = L'у';continue;}
            if (x[i] == L'ы') {x[i] = L'ф';continue;}
            if (x[i] == L'ь') {x[i] = L'х';continue;}
            if (x[i] == L'э') {x[i] = L'ц';continue;}
            if (x[i] == L'ю') {x[i] = L'ч';continue;}
            if (x[i] == L'я') {x[i] = L'ш';continue;}
        }
    }
    if (k == 27 || k == -6){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ъ';continue;}
            if (x[i] == L'б') {x[i] = L'ы';continue;}
            if (x[i] == L'в') {x[i] = L'ь';continue;}
            if (x[i] == L'г') {x[i] = L'э';continue;}
            if (x[i] == L'д') {x[i] = L'ю';continue;}
            if (x[i] == L'е') {x[i] = L'я';continue;}
            if (x[i] == L'ё') {x[i] = L'а';continue;}
            if (x[i] == L'ж') {x[i] = L'б';continue;}
            if (x[i] == L'з') {x[i] = L'в';continue;}
            if (x[i] == L'и') {x[i] = L'г';continue;}
            if (x[i] == L'й') {x[i] = L'д';continue;}
            if (x[i] == L'к') {x[i] = L'е';continue;}
            if (x[i] == L'л') {x[i] = L'ё';continue;}
            if (x[i] == L'м') {x[i] = L'ж';continue;}
            if (x[i] == L'н') {x[i] = L'з';continue;}
            if (x[i] == L'о') {x[i] = L'и';continue;}
            if (x[i] == L'п') {x[i] = L'й';continue;}
            if (x[i] == L'р') {x[i] = L'к';continue;}
            if (x[i] == L'с') {x[i] = L'л';continue;}
            if (x[i] == L'т') {x[i] = L'м';continue;}
            if (x[i] == L'у') {x[i] = L'н';continue;}
            if (x[i] == L'ф') {x[i] = L'о';continue;}
            if (x[i] == L'х') {x[i] = L'п';continue;}
            if (x[i] == L'ц') {x[i] = L'р';continue;}
            if (x[i] == L'ч') {x[i] = L'с';continue;}
            if (x[i] == L'ш') {x[i] = L'т';continue;}
            if (x[i] == L'щ') {x[i] = L'у';continue;}
            if (x[i] == L'ъ') {x[i] = L'ф';continue;}
            if (x[i] == L'ы') {x[i] = L'х';continue;}
            if (x[i] == L'ь') {x[i] = L'ц';continue;}
            if (x[i] == L'э') {x[i] = L'ч';continue;}
            if (x[i] == L'ю') {x[i] = L'ш';continue;}
            if (x[i] == L'я') {x[i] = L'щ';continue;}
        }
    }
    if (k == 28 || k == -5){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ы';continue;}
            if (x[i] == L'б') {x[i] = L'ь';continue;}
            if (x[i] == L'в') {x[i] = L'э';continue;}
            if (x[i] == L'г') {x[i] = L'ю';continue;}
            if (x[i] == L'д') {x[i] = L'я';continue;}
            if (x[i] == L'е') {x[i] = L'а';continue;}
            if (x[i] == L'ё') {x[i] = L'б';continue;}
            if (x[i] == L'ж') {x[i] = L'в';continue;}
            if (x[i] == L'з') {x[i] = L'г';continue;}
            if (x[i] == L'и') {x[i] = L'д';continue;}
            if (x[i] == L'й') {x[i] = L'е';continue;}
            if (x[i] == L'к') {x[i] = L'ё';continue;}
            if (x[i] == L'л') {x[i] = L'ж';continue;}
            if (x[i] == L'м') {x[i] = L'з';continue;}
            if (x[i] == L'н') {x[i] = L'и';continue;}
            if (x[i] == L'о') {x[i] = L'й';continue;}
            if (x[i] == L'п') {x[i] = L'к';continue;}
            if (x[i] == L'р') {x[i] = L'л';continue;}
            if (x[i] == L'с') {x[i] = L'м';continue;}
            if (x[i] == L'т') {x[i] = L'н';continue;}
            if (x[i] == L'у') {x[i] = L'о';continue;}
            if (x[i] == L'ф') {x[i] = L'п';continue;}
            if (x[i] == L'х') {x[i] = L'р';continue;}
            if (x[i] == L'ц') {x[i] = L'с';continue;}
            if (x[i] == L'ч') {x[i] = L'т';continue;}
            if (x[i] == L'ш') {x[i] = L'у';continue;}
            if (x[i] == L'щ') {x[i] = L'ф';continue;}
            if (x[i] == L'ъ') {x[i] = L'х';continue;}
            if (x[i] == L'ы') {x[i] = L'ц';continue;}
            if (x[i] == L'ь') {x[i] = L'ч';continue;}
            if (x[i] == L'э') {x[i] = L'ш';continue;}
            if (x[i] == L'ю') {x[i] = L'щ';continue;}
            if (x[i] == L'я') {x[i] = L'ъ';continue;}
        }
    }
    if (k == 29 || k == -4){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ь';continue;}
            if (x[i] == L'б') {x[i] = L'э';continue;}
            if (x[i] == L'в') {x[i] = L'ю';continue;}
            if (x[i] == L'г') {x[i] = L'я';continue;}
            if (x[i] == L'д') {x[i] = L'а';continue;}
            if (x[i] == L'е') {x[i] = L'б';continue;}
            if (x[i] == L'ё') {x[i] = L'в';continue;}
            if (x[i] == L'ж') {x[i] = L'г';continue;}
            if (x[i] == L'з') {x[i] = L'д';continue;}
            if (x[i] == L'и') {x[i] = L'е';continue;}
            if (x[i] == L'й') {x[i] = L'ё';continue;}
            if (x[i] == L'к') {x[i] = L'ж';continue;}
            if (x[i] == L'л') {x[i] = L'з';continue;}
            if (x[i] == L'м') {x[i] = L'и';continue;}
            if (x[i] == L'н') {x[i] = L'й';continue;}
            if (x[i] == L'о') {x[i] = L'к';continue;}
            if (x[i] == L'п') {x[i] = L'л';continue;}
            if (x[i] == L'р') {x[i] = L'м';continue;}
            if (x[i] == L'с') {x[i] = L'н';continue;}
            if (x[i] == L'т') {x[i] = L'о';continue;}
            if (x[i] == L'у') {x[i] = L'п';continue;}
            if (x[i] == L'ф') {x[i] = L'р';continue;}
            if (x[i] == L'х') {x[i] = L'с';continue;}
            if (x[i] == L'ц') {x[i] = L'т';continue;}
            if (x[i] == L'ч') {x[i] = L'у';continue;}
            if (x[i] == L'ш') {x[i] = L'ф';continue;}
            if (x[i] == L'щ') {x[i] = L'х';continue;}
            if (x[i] == L'ъ') {x[i] = L'ц';continue;}
            if (x[i] == L'ы') {x[i] = L'ч';continue;}
            if (x[i] == L'ь') {x[i] = L'ш';continue;}
            if (x[i] == L'э') {x[i] = L'щ';continue;}
            if (x[i] == L'ю') {x[i] = L'ъ';continue;}
            if (x[i] == L'я') {x[i] = L'ы';continue;}
        }
    }
    if (k == 30 || k == -3){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'э';continue;}
            if (x[i] == L'б') {x[i] = L'ю';continue;}
            if (x[i] == L'в') {x[i] = L'я';continue;}
            if (x[i] == L'г') {x[i] = L'а';continue;}
            if (x[i] == L'д') {x[i] = L'б';continue;}
            if (x[i] == L'е') {x[i] = L'в';continue;}
            if (x[i] == L'ё') {x[i] = L'г';continue;}
            if (x[i] == L'ж') {x[i] = L'д';continue;}
            if (x[i] == L'з') {x[i] = L'е';continue;}
            if (x[i] == L'и') {x[i] = L'ё';continue;}
            if (x[i] == L'й') {x[i] = L'ж';continue;}
            if (x[i] == L'к') {x[i] = L'з';continue;}
            if (x[i] == L'л') {x[i] = L'и';continue;}
            if (x[i] == L'м') {x[i] = L'й';continue;}
            if (x[i] == L'н') {x[i] = L'к';continue;}
            if (x[i] == L'о') {x[i] = L'л';continue;}
            if (x[i] == L'п') {x[i] = L'м';continue;}
            if (x[i] == L'р') {x[i] = L'н';continue;}
            if (x[i] == L'с') {x[i] = L'о';continue;}
            if (x[i] == L'т') {x[i] = L'п';continue;}
            if (x[i] == L'у') {x[i] = L'р';continue;}
            if (x[i] == L'ф') {x[i] = L'с';continue;}
            if (x[i] == L'х') {x[i] = L'т';continue;}
            if (x[i] == L'ц') {x[i] = L'у';continue;}
            if (x[i] == L'ч') {x[i] = L'ф';continue;}
            if (x[i] == L'ш') {x[i] = L'х';continue;}
            if (x[i] == L'щ') {x[i] = L'ц';continue;}
            if (x[i] == L'ъ') {x[i] = L'ч';continue;}
            if (x[i] == L'ы') {x[i] = L'ш';continue;}
            if (x[i] == L'ь') {x[i] = L'щ';continue;}
            if (x[i] == L'э') {x[i] = L'ъ';continue;}
            if (x[i] == L'ю') {x[i] = L'ы';continue;}
            if (x[i] == L'я') {x[i] = L'ь';continue;}
        }
    }
    if (k == 31 || k == -2){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'ю';continue;}
            if (x[i] == L'б') {x[i] = L'я';continue;}
            if (x[i] == L'в') {x[i] = L'а';continue;}
            if (x[i] == L'г') {x[i] = L'б';continue;}
            if (x[i] == L'д') {x[i] = L'в';continue;}
            if (x[i] == L'е') {x[i] = L'г';continue;}
            if (x[i] == L'ё') {x[i] = L'д';continue;}
            if (x[i] == L'ж') {x[i] = L'е';continue;}
            if (x[i] == L'з') {x[i] = L'ё';continue;}
            if (x[i] == L'и') {x[i] = L'ж';continue;}
            if (x[i] == L'й') {x[i] = L'з';continue;}
            if (x[i] == L'к') {x[i] = L'и';continue;}
            if (x[i] == L'л') {x[i] = L'й';continue;}
            if (x[i] == L'м') {x[i] = L'к';continue;}
            if (x[i] == L'н') {x[i] = L'л';continue;}
            if (x[i] == L'о') {x[i] = L'м';continue;}
            if (x[i] == L'п') {x[i] = L'н';continue;}
            if (x[i] == L'р') {x[i] = L'о';continue;}
            if (x[i] == L'с') {x[i] = L'п';continue;}
            if (x[i] == L'т') {x[i] = L'р';continue;}
            if (x[i] == L'у') {x[i] = L'с';continue;}
            if (x[i] == L'ф') {x[i] = L'т';continue;}
            if (x[i] == L'х') {x[i] = L'у';continue;}
            if (x[i] == L'ц') {x[i] = L'ф';continue;}
            if (x[i] == L'ч') {x[i] = L'х';continue;}
            if (x[i] == L'ш') {x[i] = L'ц';continue;}
            if (x[i] == L'щ') {x[i] = L'ч';continue;}
            if (x[i] == L'ъ') {x[i] = L'ш';continue;}
            if (x[i] == L'ы') {x[i] = L'щ';continue;}
            if (x[i] == L'ь') {x[i] = L'ъ';continue;}
            if (x[i] == L'э') {x[i] = L'ы';continue;}
            if (x[i] == L'ю') {x[i] = L'ь';continue;}
            if (x[i] == L'я') {x[i] = L'э';continue;}
        }
    }
    if (k == 32 || k == -1){
        for(int i=0;i<j;i++){
            if (x[i] == L'а') {x[i] = L'я';continue;}
            if (x[i] == L'б') {x[i] = L'а';continue;}
            if (x[i] == L'в') {x[i] = L'б';continue;}
            if (x[i] == L'г') {x[i] = L'в';continue;}
            if (x[i] == L'д') {x[i] = L'г';continue;}
            if (x[i] == L'е') {x[i] = L'д';continue;}
            if (x[i] == L'ё') {x[i] = L'е';continue;}
            if (x[i] == L'ж') {x[i] = L'ё';continue;}
            if (x[i] == L'з') {x[i] = L'ж';continue;}
            if (x[i] == L'и') {x[i] = L'з';continue;}
            if (x[i] == L'й') {x[i] = L'и';continue;}
            if (x[i] == L'к') {x[i] = L'й';continue;}
            if (x[i] == L'л') {x[i] = L'к';continue;}
            if (x[i] == L'м') {x[i] = L'л';continue;}
            if (x[i] == L'н') {x[i] = L'м';continue;}
            if (x[i] == L'о') {x[i] = L'н';continue;}
            if (x[i] == L'п') {x[i] = L'о';continue;}
            if (x[i] == L'р') {x[i] = L'п';continue;}
            if (x[i] == L'с') {x[i] = L'р';continue;}
            if (x[i] == L'т') {x[i] = L'с';continue;}
            if (x[i] == L'у') {x[i] = L'т';continue;}
            if (x[i] == L'ф') {x[i] = L'у';continue;}
            if (x[i] == L'х') {x[i] = L'ф';continue;}
            if (x[i] == L'ц') {x[i] = L'х';continue;}
            if (x[i] == L'ч') {x[i] = L'ц';continue;}
            if (x[i] == L'ш') {x[i] = L'ч';continue;}
            if (x[i] == L'щ') {x[i] = L'ш';continue;}
            if (x[i] == L'ъ') {x[i] = L'щ';continue;}
            if (x[i] == L'ы') {x[i] = L'ъ';continue;}
            if (x[i] == L'ь') {x[i] = L'ы';continue;}
            if (x[i] == L'э') {x[i] = L'ь';continue;}
            if (x[i] == L'ю') {x[i] = L'э';continue;}
            if (x[i] == L'я') {x[i] = L'ю';continue;}
        }
    }
    return x;
}




#endif // LIBRU1_H
