package aula11;

public class SequenciaEscape {
	
	public static void main(String[] args) {
		
// ||==============================================||
// || Sequencia de Escape || 		Descricao	   ||
// ||		\t			  || tab        	       ||
// ||		\b			  || backspace	           ||
// ||		\n			  || nova linha	           ||
// ||		\r			  || retorno de carro	   ||
// || 		\f			  || avanço de pagina	   ||
// ||		\'			  || aspas simples	       ||
// || 		\"			  || aspas duplas	       ||	
// ||		\\			  || barra invertida	   ||
// ||==============================================||
		
		// "Hello, World!"
		System.out.print("\"Hello, World!\"\n\r");
		// 1\4
		System.out.print("1\\4");		
		
	}

}
