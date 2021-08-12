const cliente = {
    codigo: 16532,
    nome: 'Ana',
    vip: true,
    endereco: {
        logradouro: 'Rua ABC',
        numero: 123,
        complemento: 'Apto 101 Bloco B',
        pontosRef: [
            // 'Hospital X',
            // 'Shopping Y',
            {nome: 'Hospital X', muitoProximo: true},
            {nome: 'Shopping Y', muitoProximo: false},
        ]
    },
    nomeFilhos: ['Bia', 'Carlos', 'Gabriel'],
};

console.log(cliente['endereco']['complemento']);
console.log(cliente.endereco.logradouro);
console.log(cliente.endereco.pontosRef[1]);
console.log(cliente.endereco.pontosRef[1].muitoProximo);