#pragma once
#include <windows.h>
#include <urlmon.h>
#include <servprov.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "Animal.h"
#include "Archivos.h"
#include "AgregarAnimal.h"
#include "ModificarAnimales.h"

namespace RefugioAnimales {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			ActualizarAnimales();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ Datos;







	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnAñadir;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnMaxMin;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ Footer;

	private: System::Windows::Forms::Panel^ panel5;

	private:
		
		System::Void ActualizarAnimales()
		{
			// Obtener la lista de animales desde el archivo
			List<Animal^>^ animales = Archivos::ObtenerAnimales();

			// Limpiar el DataGridView antes de cargar los datos
			Datos->Rows->Clear();
			Datos->Columns->Clear(); // Limpiar también las columnas

			// Agregar las columnas al DataGridView
			Datos->Columns->Add("ID", "ID");
			Datos->Columns->Add("Edad", "Edad");
			Datos->Columns->Add("Nombre", "Nombre");
			Datos->Columns->Add("FechaIngreso", "Fecha Ingreso");
			Datos->Columns->Add("FechaAdopcion", "Fecha Adopción");

			// Agregar cada animal al DataGridView
			for each (Animal ^ animal in animales)
			{
				array<String^>^ row = {
					animal->GetID()->ToString(),
					animal->GetEdad()->ToString(),
					animal->GetNombre(),
					animal->GetFechaIngreso()->ToString(),
					animal->GetFechaAdopcion() ? animal->GetFechaAdopcion()->ToString() : "No adoptado"
				};
				Datos->Rows->Add(row);
			}
		}

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Datos = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnAñadir = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnMaxMin = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Footer = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datos))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->Footer->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// Datos
			// 
			this->Datos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Datos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Datos->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Datos->BackgroundColor = System::Drawing::Color::White;
			this->Datos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Datos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Roboto Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(180)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Datos->DefaultCellStyle = dataGridViewCellStyle1;
			this->Datos->GridColor = System::Drawing::Color::Black;
			this->Datos->Location = System::Drawing::Point(23, 9);
			this->Datos->Margin = System::Windows::Forms::Padding(0);
			this->Datos->MinimumSize = System::Drawing::Size(1035, 384);
			this->Datos->MultiSelect = false;
			this->Datos->Name = L"Datos";
			this->Datos->ReadOnly = true;
			this->Datos->RowHeadersWidth = 51;
			this->Datos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->Datos->Size = System::Drawing::Size(1035, 388);
			this->Datos->TabIndex = 0;
			this->Datos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Datos_CellContentClick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnModificar);
			this->panel2->Controls->Add(this->btnEliminar);
			this->panel2->Controls->Add(this->btnAñadir);
			this->panel2->Controls->Add(this->btnBuscar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->MinimumSize = System::Drawing::Size(800, 128);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(800, 137);
			this->panel2->TabIndex = 1;
			// 
			// btnModificar
			// 
			this->btnModificar->AccessibleDescription = L"Modificar";
			this->btnModificar->AccessibleName = L"Modificar";
			this->btnModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(587, 33);
			this->btnModificar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(167, 33);
			this->btnModificar->TabIndex = 6;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = false;
			this->btnModificar->Click += gcnew System::EventHandler(this, &MyForm::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->AccessibleDescription = L"Eliminar";
			this->btnEliminar->AccessibleName = L"Eliminar";
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(397, 78);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(167, 33);
			this->btnEliminar->TabIndex = 5;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// btnAñadir
			// 
			this->btnAñadir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAñadir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAñadir->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAñadir->Location = System::Drawing::Point(397, 33);
			this->btnAñadir->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAñadir->Name = L"btnAñadir";
			this->btnAñadir->Size = System::Drawing::Size(167, 33);
			this->btnAñadir->TabIndex = 4;
			this->btnAñadir->Text = L"Añadir";
			this->btnAñadir->UseVisualStyleBackColor = false;
			this->btnAñadir->Click += gcnew System::EventHandler(this, &MyForm::btnAñadir_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::Color::Black;
			this->btnBuscar->Location = System::Drawing::Point(23, 33);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(160, 78);
			this->btnBuscar->TabIndex = 3;
			this->btnBuscar->Text = L"Actualizar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &MyForm::btnBuscar_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(5, 34);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 10;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnMaxMin
			// 
			this->btnMaxMin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnMaxMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaxMin->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaxMin->Location = System::Drawing::Point(99, 34);
			this->btnMaxMin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMaxMin->Name = L"btnMaxMin";
			this->btnMaxMin->Size = System::Drawing::Size(75, 33);
			this->btnMaxMin->TabIndex = 9;
			this->btnMaxMin->Text = L"Max";
			this->btnMaxMin->UseVisualStyleBackColor = false;
			this->btnMaxMin->Click += gcnew System::EventHandler(this, &MyForm::btnMaxMin_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->AccessibleDescription = L"Salir";
			this->btnSalir->AccessibleName = L"Salir";
			this->btnSalir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(5, 79);
			this->btnSalir->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(167, 33);
			this->btnSalir->TabIndex = 8;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(4, 16);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(349, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Refugio de Animales";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnSalir);
			this->panel3->Controls->Add(this->btnMaxMin);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(888, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(179, 137);
			this->panel3->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1067, 71);
			this->panel4->TabIndex = 4;
			// 
			// Footer
			// 
			this->Footer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Footer->Controls->Add(this->panel3);
			this->Footer->Controls->Add(this->panel2);
			this->Footer->Location = System::Drawing::Point(0, 473);
			this->Footer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Footer->MinimumSize = System::Drawing::Size(1067, 137);
			this->Footer->Name = L"Footer";
			this->Footer->Size = System::Drawing::Size(1067, 137);
			this->Footer->TabIndex = 5;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add(this->Datos);
			this->panel5->Location = System::Drawing::Point(0, 66);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 100, 3, 100);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1067, 406);
			this->panel5->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->ClientSize = System::Drawing::Size(1067, 615);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Footer);
			this->Controls->Add(this->panel4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1061, 603);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Refugio de Animales";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datos))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->Footer->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay una celda seleccionada
		if (Datos->SelectedCells->Count == 0)
		{
			MessageBox::Show("Debes seleccionar un animal.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Obtener el ID del animal seleccionado
		int selectedRow = Datos->SelectedCells[0]->RowIndex;
		int animalID = Convert::ToInt32(Datos->Rows[selectedRow]->Cells["ID"]->Value);

		// Llamar a la función para eliminar el animal por ID
		Archivos::EliminarAnimalPorID(gcnew int(animalID));

		// Actualizar la visualización después de eliminar el animal
		ActualizarAnimales();
	}
	private: System::Void btnMaxMin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized) {
			this->WindowState = FormWindowState::Normal;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		   this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		ActualizarAnimales();
	}
	private: System::Void Datos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void btnAñadir_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarAnimal^ ag = gcnew AgregarAnimal();
		ag->ShowDialog();
		ActualizarAnimales();
	}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Datos->SelectedCells->Count == 0)
	{
		MessageBox::Show("Debes seleccionar un animal.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	// Obtener el ID del animal seleccionado
	int selectedRow = Datos->SelectedCells[0]->RowIndex;
	int id = Convert::ToInt32(Datos->Rows[selectedRow]->Cells["ID"]->Value);
	String^ nombre = Convert::ToString(Datos->Rows[selectedRow]->Cells["Nombre"]->Value);
	int edad = Convert::ToInt32(Datos->Rows[selectedRow]->Cells["Edad"]->Value);
	DateTime ingreso = Convert::ToDateTime(Datos->Rows[selectedRow]->Cells["FechaIngreso"]->Value);
	String^ valorCelda = Datos->Rows[selectedRow]->Cells["FechaAdopcion"]->Value->ToString();
	DateTime adopcion;

	if (String::IsNullOrEmpty(valorCelda) || valorCelda == "No adoptado") {
		// La celda está vacía o indica "No adoptado", puedes asignar un valor nulo a 'adopcion'
		adopcion = DateTime::Today.AddYears(-50); // Puedes usar DateTime::MinValue como representación de fecha nula
	}
	else {
		// La celda contiene un valor, intenta la conversión a DateTime
		if (DateTime::TryParseExact(valorCelda, "yyyy-MM-dd", CultureInfo::InvariantCulture, DateTimeStyles::None, adopcion)) {
			// La conversión fue exitosa, puedes usar la variable 'adopcion'
		}
		else {
			// La conversión falló, maneja el error según sea necesario
		}
	}

	ModificarAnimales^ mf = gcnew ModificarAnimales(id,nombre,edad,ingreso,adopcion);
	mf->ShowDialog();
	ActualizarAnimales();
}
};
}
