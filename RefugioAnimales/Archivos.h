#pragma once
#include <fstream>
#include "Animal.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

ref class Archivos
{
public:
    static void AgregarAnimal(String^ nombre, int^ edad)
    {
        List<Animal^>^ animales = ObtenerAnimales();
        int nuevoID = animales->Count + 1;
        Animal^ nuevoAnimal = gcnew Animal(gcnew int(nuevoID), edad, nombre);
        animales->Add(nuevoAnimal);
        GuardarAnimales(animales);
    }

    static List<Animal^>^ ObtenerAnimales()
    {
        List<Animal^>^ animales = gcnew List<Animal^>();
        try
        {
            StreamReader^ reader = gcnew StreamReader("Animales.txt");

            while (!reader->EndOfStream)
            {
                int id = Convert::ToInt32(reader->ReadLine());
                int edad = Convert::ToInt32(reader->ReadLine());
                String^ nombre = reader->ReadLine();
                DateTime^ ingreso = DateTime::Parse(reader->ReadLine());
                DateTime^ adopcion = nullptr;
                String^ adopcionStr = reader->ReadLine();

                if (adopcionStr != "No adoptado")
                {
                    adopcion = DateTime::Parse(adopcionStr);
                }

                Animal^ animal = gcnew Animal(gcnew int(id), gcnew int(edad), nombre);
                animal->SetFechaIngreso(ingreso);
                animal->SetFechaAdopcion(adopcion);
                animales->Add(animal);
            }

            reader->Close();
        }
        catch (Exception^ e)
        {
            Console::WriteLine(e->Message);
        }

        return animales;
    }

    static void GuardarAnimales(List<Animal^>^ animales)
    {
        StreamWriter^ writer = gcnew StreamWriter("Animales.txt");

        for each (Animal ^ animal in animales)
        {
            writer->WriteLine(animal->GetID());
            writer->WriteLine(animal->GetEdad());
            writer->WriteLine(animal->GetNombre());
            writer->WriteLine(animal->GetFechaIngreso());
            writer->WriteLine(animal->GetFechaAdopcion() ? animal->GetFechaAdopcion()->ToString() : "No adoptado");
        }

        writer->Close();
        Console::WriteLine("Animales guardados correctamente.");
    }

    static void EliminarAnimalPorID(int^ id)
    {
        String^ archivoOriginal = "Animales.txt";
        String^ archivoTemporal = "TempAnimales.txt";

        try
        {
            StreamReader^ reader = gcnew StreamReader(archivoOriginal);
            StreamWriter^ writer = gcnew StreamWriter(archivoTemporal);

            while (!reader->EndOfStream)
            {
                int^ lineaID = gcnew int(Convert::ToInt32(reader->ReadLine()));

                if (*lineaID != *id)
                {
                    // No copiar la línea si la ID coincide con la que deseas eliminar
                    writer->WriteLine(*lineaID);
                    writer->WriteLine(reader->ReadLine());  // Edad
                    writer->WriteLine(reader->ReadLine());  // Nombre
                    writer->WriteLine(reader->ReadLine());  // Fecha Ingreso
                    writer->WriteLine(reader->ReadLine());  // Fecha Adopcion
                }
                else
                {
                    // Leer las líneas adicionales correspondientes al animal que queremos eliminar
                    reader->ReadLine();  // Edad
                    reader->ReadLine();  // Nombre
                    reader->ReadLine();  // Fecha Ingreso
                    reader->ReadLine();  // Fecha Adopcion
                }
            }

            reader->Close();
            writer->Close();

            // Eliminar el archivo original
            File::Delete(archivoOriginal);

            // Renombrar el archivo temporal al nombre del archivo original
            File::Move(archivoTemporal, archivoOriginal);

            Console::WriteLine("Animal eliminado correctamente.");
        }
        catch (Exception^ e)
        {
            Console::WriteLine("Error al eliminar el animal: " + e->Message);
        }
    }

    static void ModificarAnimal(int^ id, String^ nuevoNombre, int^ nuevaEdad, DateTime^ nuevoIngreso, DateTime^ nuevaAdopcion)
    {
        List<Animal^>^ animales = ObtenerAnimales();

        try
        {
            String^ archivoTemporal = "TempAnimales.txt";
            StreamWriter^ writer = gcnew StreamWriter(archivoTemporal);
            Console::WriteLine("ID recibido para modificar: " + *id);
            if (animales->Count == 0)
            {
                Console::WriteLine("La lista de animales está vacía. No hay animales para modificar.");
                return;
            }
            for each (Animal ^ animal in animales)
            {
                if (*animal->GetID() == *id)
                {
                    Console::WriteLine("Modificando animal ID: " + *id);
                    Console::WriteLine("Datos actuales: " + animal->ToString()); // Agrega un método ToString() en la clase Animal

                    // Modificar los datos del animal
                    animal->SetNombre(nuevoNombre);
                    animal->SetEdad(nuevaEdad);
                    animal->SetFechaIngreso(nuevoIngreso);
                    animal->SetFechaAdopcion(nuevaAdopcion);

                    Console::WriteLine("Datos modificados: " + animal->ToString()); // Imprime los datos modificados
                }

                // Escribir los datos en el archivo temporal
                writer->WriteLine(animal->GetID());
                writer->WriteLine(animal->GetEdad());
                writer->WriteLine(animal->GetNombre());
                writer->WriteLine(animal->GetFechaIngreso());
                writer->WriteLine(animal->GetFechaAdopcion() ? animal->GetFechaAdopcion()->ToString() : "No adoptado");
            }

            writer->Close();

            // Reemplazar el archivo original con el temporal
            File::Delete("Animales.txt");
            File::Move(archivoTemporal, "Animales.txt");

            Console::WriteLine("Animal modificado correctamente.");
        }
        catch (Exception^ e)
        {
            Console::WriteLine("Error al modificar el animal: " + e->Message);
        }
    }
};