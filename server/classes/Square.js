module.exports = class Square {
    get state() {
        return this._state;
    }

    set state(value) {
        if (typeof value === "string") {
            this._state = value;
        } else {
            throw new Error('value not string')
        }

    }
    constructor(width) {
        this.width = width;
    }

    area() {
        return this.width ** 2;
    }
}