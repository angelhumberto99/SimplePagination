#ifndef PAGE_H
#define PAGE_H

class Page {
    private:
        std::string id;
        int occupied;
    public:
        Page() {
            id = "Libre";
            occupied = 0;
        }

        Page(std::string _id, int size) {
            id = _id;
            occupied = size;
        }

        void setId(std::string value) { id = value; }
        void setOccupied(int value) { occupied = value; }

        const std::string getId() const { return id; }
        const int getOccupied() const { return occupied; }
};

#endif // PAGE_H