// Elabore uma função que recebe um número como parâmetro e retorne uma string com o símbolo "+" na
// quantidade especificada no parâmetro.

function simboloMais(quantidade) {
  let resultado = "";
  for (let i = 0; i < quantidade; i++) resultado += "+";
  return resultado;
}

console.log(simboloMais(2)); // retornará "++"
console.log(simboloMais(4)); // retornará "++++"