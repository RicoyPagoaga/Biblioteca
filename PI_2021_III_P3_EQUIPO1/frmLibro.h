#pragma once
#include "frmListaLibros.h"

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLibro
	/// </summary>
	public ref class frmLibro : public System::Windows::Forms::Form
	{
	public:
		frmLibro(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmLibro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblIDlibro;
	private: System::Windows::Forms::Label^ lblNombreLibro;
	private: System::Windows::Forms::Label^ lblNombreAutorLibro;
	private: System::Windows::Forms::Label^ lblEditorialLibro;
	private: System::Windows::Forms::Label^ lblA�oEdicionLibro;
	private: System::Windows::Forms::Label^ lblCategoriaLibro;
	private: System::Windows::Forms::Label^ lblPrecioLibro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtIDlibro;
	private: System::Windows::Forms::TextBox^ txtNombreLibro;
	private: System::Windows::Forms::TextBox^ txtNombreAutorLibro;
	private: System::Windows::Forms::TextBox^ txtEditorialLibro;
	private: System::Windows::Forms::TextBox^ txtCostoLibro;





	private: System::Windows::Forms::TextBox^ txtA�oEdicionLibro;
	private: System::Windows::Forms::ComboBox^ cboCategoriaLibro;


	private: System::Windows::Forms::Button^ btnRegistrarLibro;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnMostrarLibros;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cboEstanteLibro;
	private: System::Windows::Forms::ComboBox^ cboSucursalLibro;

















	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLibro::typeid));
			this->lblIDlibro = (gcnew System::Windows::Forms::Label());
			this->lblNombreLibro = (gcnew System::Windows::Forms::Label());
			this->lblNombreAutorLibro = (gcnew System::Windows::Forms::Label());
			this->lblEditorialLibro = (gcnew System::Windows::Forms::Label());
			this->lblA�oEdicionLibro = (gcnew System::Windows::Forms::Label());
			this->lblCategoriaLibro = (gcnew System::Windows::Forms::Label());
			this->lblPrecioLibro = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIDlibro = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtNombreAutorLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtEditorialLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtCostoLibro = (gcnew System::Windows::Forms::TextBox());
			this->txtA�oEdicionLibro = (gcnew System::Windows::Forms::TextBox());
			this->cboCategoriaLibro = (gcnew System::Windows::Forms::ComboBox());
			this->btnRegistrarLibro = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnMostrarLibros = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cboEstanteLibro = (gcnew System::Windows::Forms::ComboBox());
			this->cboSucursalLibro = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIDlibro
			// 
			this->lblIDlibro->AutoSize = true;
			this->lblIDlibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIDlibro->Location = System::Drawing::Point(106, 162);
			this->lblIDlibro->Name = L"lblIDlibro";
			this->lblIDlibro->Size = System::Drawing::Size(82, 15);
			this->lblIDlibro->TabIndex = 1;
			this->lblIDlibro->Text = L"ID del libro:";
			// 
			// lblNombreLibro
			// 
			this->lblNombreLibro->AutoSize = true;
			this->lblNombreLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreLibro->Location = System::Drawing::Point(69, 225);
			this->lblNombreLibro->Name = L"lblNombreLibro";
			this->lblNombreLibro->Size = System::Drawing::Size(119, 15);
			this->lblNombreLibro->TabIndex = 2;
			this->lblNombreLibro->Text = L"Nombre del libro:";
			// 
			// lblNombreAutorLibro
			// 
			this->lblNombreAutorLibro->AutoSize = true;
			this->lblNombreAutorLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNombreAutorLibro->Location = System::Drawing::Point(65, 290);
			this->lblNombreAutorLibro->Name = L"lblNombreAutorLibro";
			this->lblNombreAutorLibro->Size = System::Drawing::Size(123, 15);
			this->lblNombreAutorLibro->TabIndex = 3;
			this->lblNombreAutorLibro->Text = L"Nombre del autor:";
			// 
			// lblEditorialLibro
			// 
			this->lblEditorialLibro->AutoSize = true;
			this->lblEditorialLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEditorialLibro->Location = System::Drawing::Point(123, 350);
			this->lblEditorialLibro->Name = L"lblEditorialLibro";
			this->lblEditorialLibro->Size = System::Drawing::Size(65, 15);
			this->lblEditorialLibro->TabIndex = 4;
			this->lblEditorialLibro->Text = L"Editorial:";
			// 
			// lblA�oEdicionLibro
			// 
			this->lblA�oEdicionLibro->AutoSize = true;
			this->lblA�oEdicionLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA�oEdicionLibro->Location = System::Drawing::Point(345, 163);
			this->lblA�oEdicionLibro->Name = L"lblA�oEdicionLibro";
			this->lblA�oEdicionLibro->Size = System::Drawing::Size(106, 15);
			this->lblA�oEdicionLibro->TabIndex = 5;
			this->lblA�oEdicionLibro->Text = L"A�o de edicion:";
			// 
			// lblCategoriaLibro
			// 
			this->lblCategoriaLibro->AutoSize = true;
			this->lblCategoriaLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCategoriaLibro->Location = System::Drawing::Point(378, 225);
			this->lblCategoriaLibro->Name = L"lblCategoriaLibro";
			this->lblCategoriaLibro->Size = System::Drawing::Size(73, 15);
			this->lblCategoriaLibro->TabIndex = 6;
			this->lblCategoriaLibro->Text = L"Categoria:";
			// 
			// lblPrecioLibro
			// 
			this->lblPrecioLibro->AutoSize = true;
			this->lblPrecioLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecioLibro->Location = System::Drawing::Point(84, 393);
			this->lblPrecioLibro->Name = L"lblPrecioLibro";
			this->lblPrecioLibro->Size = System::Drawing::Size(104, 15);
			this->lblPrecioLibro->TabIndex = 7;
			this->lblPrecioLibro->Text = L"Costo del libro:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(247, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(306, 36);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Registrar nuevo libro";
			// 
			// txtIDlibro
			// 
			this->txtIDlibro->Location = System::Drawing::Point(190, 162);
			this->txtIDlibro->Name = L"txtIDlibro";
			this->txtIDlibro->Size = System::Drawing::Size(121, 20);
			this->txtIDlibro->TabIndex = 9;
			// 
			// txtNombreLibro
			// 
			this->txtNombreLibro->Location = System::Drawing::Point(190, 225);
			this->txtNombreLibro->Name = L"txtNombreLibro";
			this->txtNombreLibro->Size = System::Drawing::Size(121, 20);
			this->txtNombreLibro->TabIndex = 10;
			// 
			// txtNombreAutorLibro
			// 
			this->txtNombreAutorLibro->Location = System::Drawing::Point(190, 290);
			this->txtNombreAutorLibro->Name = L"txtNombreAutorLibro";
			this->txtNombreAutorLibro->Size = System::Drawing::Size(121, 20);
			this->txtNombreAutorLibro->TabIndex = 11;
			// 
			// txtEditorialLibro
			// 
			this->txtEditorialLibro->Location = System::Drawing::Point(190, 350);
			this->txtEditorialLibro->Name = L"txtEditorialLibro";
			this->txtEditorialLibro->Size = System::Drawing::Size(121, 20);
			this->txtEditorialLibro->TabIndex = 12;
			// 
			// txtCostoLibro
			// 
			this->txtCostoLibro->Location = System::Drawing::Point(190, 393);
			this->txtCostoLibro->Name = L"txtCostoLibro";
			this->txtCostoLibro->Size = System::Drawing::Size(121, 20);
			this->txtCostoLibro->TabIndex = 13;
			// 
			// txtA�oEdicionLibro
			// 
			this->txtA�oEdicionLibro->Location = System::Drawing::Point(453, 162);
			this->txtA�oEdicionLibro->Name = L"txtA�oEdicionLibro";
			this->txtA�oEdicionLibro->Size = System::Drawing::Size(121, 20);
			this->txtA�oEdicionLibro->TabIndex = 14;
			// 
			// cboCategoriaLibro
			// 
			this->cboCategoriaLibro->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cboCategoriaLibro->FormattingEnabled = true;
			this->cboCategoriaLibro->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Autobiografia", L"Autoayuda", L"Ciencia",
					L"Ciencia ficcion", L"Comic", L"Deporte", L"Humor", L"Romance", L"Salud", L"Ciencias sociales", L"Suspenso", L"Terror"
			});
			this->cboCategoriaLibro->Location = System::Drawing::Point(453, 225);
			this->cboCategoriaLibro->Name = L"cboCategoriaLibro";
			this->cboCategoriaLibro->Size = System::Drawing::Size(121, 21);
			this->cboCategoriaLibro->TabIndex = 15;
			// 
			// btnRegistrarLibro
			// 
			this->btnRegistrarLibro->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnRegistrarLibro->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarLibro->FlatAppearance->BorderSize = 2;
			this->btnRegistrarLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrarLibro->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnRegistrarLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarLibro.Image")));
			this->btnRegistrarLibro->Location = System::Drawing::Point(441, 406);
			this->btnRegistrarLibro->Name = L"btnRegistrarLibro";
			this->btnRegistrarLibro->Size = System::Drawing::Size(112, 53);
			this->btnRegistrarLibro->TabIndex = 16;
			this->btnRegistrarLibro->Text = L"Registrar libro";
			this->btnRegistrarLibro->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarLibro->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(631, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 181);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// btnMostrarLibros
			// 
			this->btnMostrarLibros->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnMostrarLibros->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarLibros->FlatAppearance->BorderSize = 2;
			this->btnMostrarLibros->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarLibros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrarLibros->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarLibros.Image")));
			this->btnMostrarLibros->Location = System::Drawing::Point(583, 406);
			this->btnMostrarLibros->Name = L"btnMostrarLibros";
			this->btnMostrarLibros->Size = System::Drawing::Size(117, 53);
			this->btnMostrarLibros->TabIndex = 20;
			this->btnMostrarLibros->Text = L"Mostrar Libros";
			this->btnMostrarLibros->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarLibros->UseVisualStyleBackColor = false;
			this->btnMostrarLibros->Click += gcnew System::EventHandler(this, &frmLibro::btnMostrarLibros_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(397, 290);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Estante: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(391, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Sucursal: ";
			// 
			// cboEstanteLibro
			// 
			this->cboEstanteLibro->FormattingEnabled = true;
			this->cboEstanteLibro->Location = System::Drawing::Point(453, 287);
			this->cboEstanteLibro->Name = L"cboEstanteLibro";
			this->cboEstanteLibro->Size = System::Drawing::Size(121, 21);
			this->cboEstanteLibro->TabIndex = 23;
			// 
			// cboSucursalLibro
			// 
			this->cboSucursalLibro->FormattingEnabled = true;
			this->cboSucursalLibro->Location = System::Drawing::Point(453, 344);
			this->cboSucursalLibro->Name = L"cboSucursalLibro";
			this->cboSucursalLibro->Size = System::Drawing::Size(121, 21);
			this->cboSucursalLibro->TabIndex = 24;
			// 
			// frmLibro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(849, 496);
			this->Controls->Add(this->cboSucursalLibro);
			this->Controls->Add(this->cboEstanteLibro);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMostrarLibros);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnRegistrarLibro);
			this->Controls->Add(this->cboCategoriaLibro);
			this->Controls->Add(this->txtA�oEdicionLibro);
			this->Controls->Add(this->txtCostoLibro);
			this->Controls->Add(this->txtEditorialLibro);
			this->Controls->Add(this->txtNombreAutorLibro);
			this->Controls->Add(this->txtNombreLibro);
			this->Controls->Add(this->txtIDlibro);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblPrecioLibro);
			this->Controls->Add(this->lblCategoriaLibro);
			this->Controls->Add(this->lblA�oEdicionLibro);
			this->Controls->Add(this->lblEditorialLibro);
			this->Controls->Add(this->lblNombreAutorLibro);
			this->Controls->Add(this->lblNombreLibro);
			this->Controls->Add(this->lblIDlibro);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLibro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Libro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnMostrarLibros_Click(System::Object^ sender, System::EventArgs^ e) {
	frmListaLibros^ formulario = gcnew frmListaLibros;
	formulario->Show();
}
};
}
