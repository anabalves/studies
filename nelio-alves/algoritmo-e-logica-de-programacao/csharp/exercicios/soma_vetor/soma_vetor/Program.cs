﻿using System;
using System.Globalization;

namespace soma_vetor {

	class Program {

		static void Main(string[] args) {
			CultureInfo CI = CultureInfo.InvariantCulture;

			double soma, media;
			int N;

			Console.Write("Quantos numeros voce vai digitar? ");
			N = int.Parse(Console.ReadLine());

			double[] vet = new double[N];

			for (int i = 0; i < N; i++) {
				Console.Write("Digite um numero: ");
				vet[i] = double.Parse(Console.ReadLine(), CI);
			}

			Console.Write("\nVALORES = ");
			for (int i = 0; i < N; i++) {
				Console.Write(vet[i].ToString("F1", CI) + "  ");
			}

			soma = 0;
			for (int i = 0; i < N; i++) {
				soma += vet[i];
			}

			Console.WriteLine("\nSOMA = " + soma.ToString("F2", CI));

			media = soma / N;
			
			Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
		}

	}

}