function criarData(dia, mes, ano) {
    return {
        dia,
        mes,
        ano,
        exibir() {
            return `${this.dia}/${this.mes}/${this.ano}`;
        },
    };
};

const d1 = criarData(19, 11, 1991);
const d2 = criarData(22, 11, 2023);
const d3 = criarData(25, 11, 2055);

console.log(d1.exibir());
console.log(d2.exibir());
console.log(d3.exibir());