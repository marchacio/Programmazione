struct dynamic_array {
    int* store;
    unsigned int size;
};

void read_d_array(dynamic_array& d);

void print_d_array(const dynamic_array& d);

void delete_d_array(dynamic_array& d);

void create_d_array(dynamic_array& d, int s, int v) ;
