#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char maker[50];
    char model[50];
    int year;
    char color[20];
    int price;
} Car;

typedef struct {
    int total_cars;
    float avg_price;
    Car expensive_car;
    Car newest_car;
} Car_stat;

Car cars_array[] = {
    {"Toyota", "Camry", 2019, "red", 22000},
    {"Honda", "Civic", 2020, "blue", 28000},
    {"Hyundai", "Tuscon", 2023, "grey", 27000},
    {"Tesla", "Model 3", 2021, "white", 40000},
    {"Chevrolet", "Corvette", 2022, "black", 65000},
    {"Tesla", "Model Y", 2022, "blue", 70000},
    {"", "", 0, "", 0}, // A marker for the last element
};

Car *get_cars_by_make(const Car *cars_array, const char *make)
{
    Car *result = (Car*)malloc(sizeof(Car) * 1);
    int i,len = 0;

    for(i=0;cars_array[i].year!=0;i++)
    {
        if(strcmp(cars_array[i].maker, make) == 0)
        {
            Car *temp = (Car*)malloc(sizeof(Car) * (len + 1));
            for(int j=0;j<len;j++)
            {
                temp[j] = result[j];
            }
            free(result);
            result = temp;
            result[len++] = cars_array[i];
        }
    }
    Car *temp = (Car*)malloc(sizeof(Car) * (len + 1));
    for(int j=0;j<len;j++)
    {
        temp[j] = result[j];
    }
    free(result);
    result = temp;
    result[len++] = cars_array[i];
    return result;
}

Car *get_cars_by_price(const Car *cars_array, int min_price, int max_price)
{
    Car *ret = (Car*)malloc(1 * sizeof(Car));
    int i,j,len = 0;
    for(i=0;cars_array[i].year != 0;i++)
    {
        if(cars_array[i].price <= max_price && cars_array[i].price >= min_price)
        {
            Car *temp = (Car*)malloc((len+1) * sizeof(Car));
            for(j=0;j<len;j++)
            {
                temp[j] = ret[j];
            }
            free(ret);
            ret = temp;
            ret[len++] = cars_array[i];
        }
    }
    Car *temp = (Car*)malloc((len+1) * sizeof(Car));
    for(j=0;j<len;j++)
    {
        temp[j] = ret[j];
    }
    free(ret);
    ret = temp;
    ret[len++] = cars_array[i];
    return ret;
}

Car_stat get_car_stats(const Car *cars_array)
{
    Car_stat ret;
    float total_price = 0;
    int i, year = -1, price = -1;
    Car newest, expensive;
    for(i=0;cars_array[i].year != 0;i++)
    {
        total_price += (float)cars_array[i].price;
        if(cars_array[i].price > price)
        {
            price = cars_array[i].price;
            expensive = cars_array[i];
        }
        if(cars_array[i].year > year)
        {
            year = cars_array[i].year;
            newest = cars_array[i];
        }
    }
    i -= 1;
    ret.avg_price = total_price / i;
    ret.total_cars = i;
    ret.expensive_car = expensive;
    ret.newest_car = newest;
    return ret;
}

int main() // There's no main function in real test.
{
    Car *toyota_cars = get_cars_by_make(cars_array, "Toyota");
    if (toyota_cars != NULL) {
        for (int i = 0; toyota_cars[i].year != 0; i++) {
            printf("Car %d: %s %s, Year: %d, Color: %s, Price: $%d\n",
                   i + 1, toyota_cars[i].maker, toyota_cars[i].model,
                   toyota_cars[i].year, toyota_cars[i].color, toyota_cars[i].price);
        }
        free(toyota_cars);
    } else {
        printf("No cars found for the specified make.\n");
    }
    Car *bet_25000_65000 = get_cars_by_price(cars_array, 25000, 65000);
    if (bet_25000_65000 != NULL) {
        for (int i = 0; bet_25000_65000[i].year != 0; i++) {
            printf("Car %d: %s %s, Year: %d, Color: %s, Price: $%d\n",
                   i + 1, bet_25000_65000[i].maker, bet_25000_65000[i].model,
                   bet_25000_65000[i].year, bet_25000_65000[i].color, bet_25000_65000[i].price);
        }
        free(bet_25000_65000);
    } else {
        printf("No cars found for the specified price.\n");
    }
    Car_stat p = get_car_stats(cars_array);
    printf("%d %lf\n", p.total_cars, p.avg_price);
    printf("Expensive Car : %s %s, Year: %d, Color: %s, Price: $%d\n",
                    p.expensive_car.maker, p.expensive_car.model,
                   p.expensive_car.year, p.expensive_car.color, p.expensive_car.price);
    printf("Newest Car : %s %s, Year: %d, Color: %s, Price: $%d\n",
                    p.newest_car.maker, p.newest_car.model,
                   p.newest_car.year, p.newest_car.color, p.newest_car.price);
    return 0;
}