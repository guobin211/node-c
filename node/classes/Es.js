class Es {
    // _name = "es2019";
    get name() {
        return this._name;
    }
    set name(value) {
        this._name = value;
    }
    constructor() {
        this._name = "es2019";
    }

    say() {
        console.log(`hello ${this._name}`);
    }
}

module.exports = class Ess extends Es{
    constructor() {
        super();
        // this._name = "ess";
    }

    say() {
        console.log(`hello ${this._name}`);
    }
}
