#ifndef PAGE_H
#define PAGE_H

class Page {
    private:
        std::string id;
        int occupied;
        std::string state;
    public:
        Page() {
            id = "Libre";
            occupied = 0;
            state = "~";
        }

        Page(std::string _id, int size, std::string _state) {
            id = _id;
            occupied = size;
            state = _state;
        }

        void setId(std::string value) { id = value; }
        void setOccupied(int value) { occupied = value; }
        void setState(std::string value) { state = value; }

        const std::string getId() const { return id; }
        const int getOccupied() const { return occupied; }
        const std::string getState() const { return state; }
};

#endif // PAGE_H