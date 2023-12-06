#pragma once
#include <vcclr.h>

using namespace System;

//ref para que el recolector de basura de .NET se encargue de administrar el desconstructor
ref class Animal
{
private:
	int^ ID;
	int^ Edad;
	String^ Nombre;
	DateTime^ Ingreso;
	DateTime^ Adopcion;

public:
	Animal(int^ id, int^ edad, System::String^ nombre)
	{
		this->ID = id;
		this->Edad = edad;
		this->Nombre = nombre;
		this->Ingreso = DateTime::Now;
	}
	void SetFechaAdopcion(DateTime^ adopcion)
	{
		this->Adopcion = adopcion;
	}
	void SetEdad(int^ edad)
	{ 
		this->Edad = edad;
	}
	void SetNombre(String^ nombre)
	{
		this->Nombre = nombre;
	}
	void SetFechaIngreso(DateTime^ ingreso)
	{
		this->Ingreso = ingreso;
	}
	void SetAdopcion(DateTime^ adopcion)
	{
		this->Adopcion = adopcion;
	}
	String^ GetNombre() { return this->Nombre; }
	int^ GetID() { return this->ID; }
	int^ GetEdad() { return this->Edad; }
	DateTime^ GetFechaIngreso() { return this->Ingreso; }
	DateTime^ GetFechaAdopcion() { return this->Adopcion; }
	
};

