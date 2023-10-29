#pragma once

namespace RefugioAnimales {

	using namespace System;
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ Datos;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnBaja;


	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnAñadir;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnMaxMin;
	private: System::Windows::Forms::Button^ btnSalir;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Datos = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnAñadir = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnBaja = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnMaxMin = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datos))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Datos);
			this->panel1->Location = System::Drawing::Point(16, 81);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1035, 384);
			this->panel1->TabIndex = 0;
			// 
			// Datos
			// 
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
			this->Datos->Location = System::Drawing::Point(0, 0);
			this->Datos->Margin = System::Windows::Forms::Padding(4);
			this->Datos->Name = L"Datos";
			this->Datos->RowHeadersWidth = 51;
			this->Datos->Size = System::Drawing::Size(1035, 384);
			this->Datos->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnMaxMin);
			this->panel2->Controls->Add(this->btnSalir);
			this->panel2->Controls->Add(this->btnBaja);
			this->panel2->Controls->Add(this->btnModificar);
			this->panel2->Controls->Add(this->btnEliminar);
			this->panel2->Controls->Add(this->btnAñadir);
			this->panel2->Controls->Add(this->btnBuscar);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(16, 473);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1035, 128);
			this->panel2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(8) {
				L"ID", L"Nombre", L"Tipo", L"Raza",
					L"Color", L"Edad", L"Fecha de ingreso", L"Fecha de adopcion"
			});
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Todos", L"ID", L"Nombre", L"Tipo", L"Raza", L"Color",
					L"Edad", L"Fecha de ingreso", L"Fecha de adopcion"
			});
			this->comboBox1->Location = System::Drawing::Point(110, 33);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(131, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 89);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(5, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Buscar";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Refugio de Animales";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::Color::White;
			this->btnBuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->ForeColor = System::Drawing::Color::Black;
			this->btnBuscar->Location = System::Drawing::Point(248, 33);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(79, 78);
			this->btnBuscar->TabIndex = 3;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			// 
			// btnAñadir
			// 
			this->btnAñadir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAñadir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAñadir->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAñadir->Location = System::Drawing::Point(398, 33);
			this->btnAñadir->Name = L"btnAñadir";
			this->btnAñadir->Size = System::Drawing::Size(167, 33);
			this->btnAñadir->TabIndex = 4;
			this->btnAñadir->Text = L"Añadir";
			this->btnAñadir->UseVisualStyleBackColor = false;
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(398, 78);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(167, 33);
			this->btnEliminar->TabIndex = 5;
			this->btnEliminar->Text = L"Añadir";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->Location = System::Drawing::Point(587, 33);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(167, 33);
			this->btnModificar->TabIndex = 6;
			this->btnModificar->Text = L"Añadir";
			this->btnModificar->UseVisualStyleBackColor = false;
			// 
			// btnBaja
			// 
			this->btnBaja->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnBaja->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBaja->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBaja->Location = System::Drawing::Point(587, 78);
			this->btnBaja->Name = L"btnBaja";
			this->btnBaja->Size = System::Drawing::Size(167, 33);
			this->btnBaja->TabIndex = 7;
			this->btnBaja->Text = L"Añadir";
			this->btnBaja->UseVisualStyleBackColor = false;
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(865, 78);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(167, 33);
			this->btnSalir->TabIndex = 8;
			this->btnSalir->Text = L"Añadir";
			this->btnSalir->UseVisualStyleBackColor = false;
			// 
			// btnMaxMin
			// 
			this->btnMaxMin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnMaxMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaxMin->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaxMin->Location = System::Drawing::Point(865, 33);
			this->btnMaxMin->Name = L"btnMaxMin";
			this->btnMaxMin->Size = System::Drawing::Size(167, 33);
			this->btnMaxMin->TabIndex = 9;
			this->btnMaxMin->Text = L"Añadir";
			this->btnMaxMin->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->ClientSize = System::Drawing::Size(1067, 615);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1061, 605);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Refugio de Animales";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datos))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
