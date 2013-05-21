#pragma once
#include "ICharacter.h"
#include "IWeapon.h"
#include "ISpell.h"
#include "IMagicalObject.h"
#include "Type.h"

namespace Assignment3Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			names = gcnew CType();
			//
			//TODO: Add the constructor code here
			//
			currentNumberOfObjects = currentNumberOfCharacters = 0;
			type = e_CT_Wizard;
			temp = gcnew ICharacter(names->getCharacterTypes()[type]+names->getCharacterName(),names->getCharacterTypes()[type],type);
			character1 = gcnew ICharacter( names->getCharacterTypes()[type]+names->getCharacterName(),names->getCharacterTypes()[type],type);
			aCharArray = gcnew array<ICharacter^>(4);
			ObjectsCreated = gcnew array<Entity^>(4);
			aCharArray[currentNumberOfCharacters] = (ICharacter^)temp;
			++currentNumberOfCharacters;
			aCharArray[currentNumberOfCharacters] = character1;
			++currentNumberOfCharacters;
			rd = gcnew array<RadioButton^>(4);
		}
			 //Variable to point at the index of current object.
	private: int currentNumberOfObjects;
	private: int currentNumberOfCharacters;
#pragma region Custom variables
	private:
		//Character object
		ICharacter^			character1;
		E_CHARACTER_TYPE	type;
		E_WEAPON_TYPE		wType;
		E_MAGICAL_OBJECT_TYPE moType;
		E_SPELL_TYPE		sType;
		Label^				tmp,
			^ lblAllies;
		Button^				btnAddAllies;
		Button^				btnAdd,^ btnDel;
		ComboBox^			cmbBxListOfAllies;
		CType^				names;

		//Array of charcters created needed for allying
		array<ICharacter^>^ aCharArray;
		//General heap for backtracking the creation process
		array<Entity^>^ ObjectsCreated;
		Entity^ temp;

		array<RadioButton^>^ rd;

#pragma endregion

	private: System::Windows::Forms::Panel^  pnlAllies;
	private: System::Windows::Forms::Label^  lblItems;
	private: System::Windows::Forms::ToolStripMenuItem^  displayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  charactersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  itemsToolStripMenuItem;
	private: System::Windows::Forms::Panel^			pnlMain;

	private: System::Windows::Forms::GroupBox^  grpBxCurrentCharacters;
	private: System::Windows::Forms::ToolStripMenuItem^  weaponToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  magicalObjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  spellToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  characterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  itemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wizardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  witchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  heroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  heroineToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sponsorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  workerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  creatureToolStripMenuItem;


	private: System::Windows::Forms::PictureBox^	pctrBxAvatar;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menu;
	private: System::Windows::Forms::ToolStripMenuItem^  characterMenu;
	private: System::Windows::Forms::ToolStripMenuItem^  createMenu;
	private: System::Windows::Forms::Panel^  pnlProperties;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->characterMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wizardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->witchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->heroineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sponsorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->workerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->weaponToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->magicalObjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->spellToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->displayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->charactersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->characterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pnlProperties = (gcnew System::Windows::Forms::Panel());
			this->pnlAllies = (gcnew System::Windows::Forms::Panel());
			this->lblItems = (gcnew System::Windows::Forms::Label());
			this->pctrBxAvatar = (gcnew System::Windows::Forms::PictureBox());
			this->pnlMain = (gcnew System::Windows::Forms::Panel());
			this->grpBxCurrentCharacters = (gcnew System::Windows::Forms::GroupBox());
			this->menu->SuspendLayout();
			this->pnlAllies->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctrBxAvatar))->BeginInit();
			this->pnlMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->characterMenu, this->displayToolStripMenuItem, 
				this->deleteToolStripMenuItem});
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(704, 24);
			this->menu->TabIndex = 0;
			this->menu->Text = L"menuStrip1";
			// 
			// characterMenu
			// 
			this->characterMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->createMenu, 
				this->weaponToolStripMenuItem, this->magicalObjectToolStripMenuItem, this->spellToolStripMenuItem});
			this->characterMenu->Name = L"characterMenu";
			this->characterMenu->Size = System::Drawing::Size(53, 20);
			this->characterMenu->Text = L"Create";
			// 
			// createMenu
			// 
			this->createMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->wizardToolStripMenuItem, 
				this->witchToolStripMenuItem, this->heroToolStripMenuItem, this->heroineToolStripMenuItem, this->sponsorToolStripMenuItem, this->workerToolStripMenuItem, 
				this->creatureToolStripMenuItem});
			this->createMenu->Name = L"createMenu";
			this->createMenu->Size = System::Drawing::Size(154, 22);
			this->createMenu->Text = L"Character";
			this->createMenu->Click += gcnew System::EventHandler(this, &Form1::createToolStripMenuItem_Click);
			// 
			// wizardToolStripMenuItem
			// 
			this->wizardToolStripMenuItem->Name = L"wizardToolStripMenuItem";
			this->wizardToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->wizardToolStripMenuItem->Text = L"Wizard";
			this->wizardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wizardToolStripMenuItem_Click);
			// 
			// witchToolStripMenuItem
			// 
			this->witchToolStripMenuItem->Name = L"witchToolStripMenuItem";
			this->witchToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->witchToolStripMenuItem->Text = L"Witch";
			this->witchToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::witchToolStripMenuItem_Click);
			// 
			// heroToolStripMenuItem
			// 
			this->heroToolStripMenuItem->Name = L"heroToolStripMenuItem";
			this->heroToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->heroToolStripMenuItem->Text = L"Hero";
			this->heroToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::heroToolStripMenuItem_Click);
			// 
			// heroineToolStripMenuItem
			// 
			this->heroineToolStripMenuItem->Name = L"heroineToolStripMenuItem";
			this->heroineToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->heroineToolStripMenuItem->Text = L"Heroine";
			this->heroineToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::heroineToolStripMenuItem_Click);
			// 
			// sponsorToolStripMenuItem
			// 
			this->sponsorToolStripMenuItem->Name = L"sponsorToolStripMenuItem";
			this->sponsorToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->sponsorToolStripMenuItem->Text = L"Sponsor";
			this->sponsorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sponsorToolStripMenuItem_Click);
			// 
			// workerToolStripMenuItem
			// 
			this->workerToolStripMenuItem->Name = L"workerToolStripMenuItem";
			this->workerToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->workerToolStripMenuItem->Text = L"Worker";
			this->workerToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::workerToolStripMenuItem_Click);
			// 
			// creatureToolStripMenuItem
			// 
			this->creatureToolStripMenuItem->Name = L"creatureToolStripMenuItem";
			this->creatureToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->creatureToolStripMenuItem->Text = L"Creature";
			this->creatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::creatureToolStripMenuItem_Click);
			// 
			// weaponToolStripMenuItem
			// 
			this->weaponToolStripMenuItem->Name = L"weaponToolStripMenuItem";
			this->weaponToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->weaponToolStripMenuItem->Text = L"Weapon";
			this->weaponToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::weaponToolStripMenuItem_Click);
			// 
			// magicalObjectToolStripMenuItem
			// 
			this->magicalObjectToolStripMenuItem->Name = L"magicalObjectToolStripMenuItem";
			this->magicalObjectToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->magicalObjectToolStripMenuItem->Text = L"Magical Object";
			this->magicalObjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::magicalObjectToolStripMenuItem_Click);
			// 
			// spellToolStripMenuItem
			// 
			this->spellToolStripMenuItem->Name = L"spellToolStripMenuItem";
			this->spellToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->spellToolStripMenuItem->Text = L"Spell";
			this->spellToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::spellToolStripMenuItem_Click);
			// 
			// displayToolStripMenuItem
			// 
			this->displayToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->charactersToolStripMenuItem, 
				this->itemsToolStripMenuItem});
			this->displayToolStripMenuItem->Name = L"displayToolStripMenuItem";
			this->displayToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->displayToolStripMenuItem->Text = L"Display";
			// 
			// charactersToolStripMenuItem
			// 
			this->charactersToolStripMenuItem->Name = L"charactersToolStripMenuItem";
			this->charactersToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->charactersToolStripMenuItem->Text = L"Characters";
			this->charactersToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::charactersToolStripMenuItem_Click);
			// 
			// itemsToolStripMenuItem
			// 
			this->itemsToolStripMenuItem->Name = L"itemsToolStripMenuItem";
			this->itemsToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->itemsToolStripMenuItem->Text = L"Items";
			this->itemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::itemsToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->characterToolStripMenuItem, 
				this->itemToolStripMenuItem});
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// characterToolStripMenuItem
			// 
			this->characterToolStripMenuItem->Name = L"characterToolStripMenuItem";
			this->characterToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->characterToolStripMenuItem->Text = L"Character";
			this->characterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::characterToolStripMenuItem_Click);
			// 
			// itemToolStripMenuItem
			// 
			this->itemToolStripMenuItem->Name = L"itemToolStripMenuItem";
			this->itemToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->itemToolStripMenuItem->Text = L"Item";
			this->itemToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::itemToolStripMenuItem_Click);
			// 
			// pnlProperties
			// 
			this->pnlProperties->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pnlProperties->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pnlProperties->Location = System::Drawing::Point(416, 281);
			this->pnlProperties->Name = L"pnlProperties";
			this->pnlProperties->Size = System::Drawing::Size(288, 257);
			this->pnlProperties->TabIndex = 1;
			// 
			// pnlAllies
			// 
			this->pnlAllies->Controls->Add(this->lblItems);
			this->pnlAllies->Location = System::Drawing::Point(0, 283);
			this->pnlAllies->Name = L"pnlAllies";
			this->pnlAllies->Size = System::Drawing::Size(297, 255);
			this->pnlAllies->TabIndex = 4;
			// 
			// lblItems
			// 
			this->lblItems->AutoSize = true;
			this->lblItems->Location = System::Drawing::Point(3, 2);
			this->lblItems->Name = L"lblItems";
			this->lblItems->Size = System::Drawing::Size(0, 13);
			this->lblItems->TabIndex = 0;
			// 
			// pctrBxAvatar
			// 
			this->pctrBxAvatar->ImageLocation = L"..\\pictures\\witch.bmp";
			this->pctrBxAvatar->Location = System::Drawing::Point(0, 0);
			this->pctrBxAvatar->Name = L"pctrBxAvatar";
			this->pctrBxAvatar->Size = System::Drawing::Size(297, 282);
			this->pctrBxAvatar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pctrBxAvatar->TabIndex = 5;
			this->pctrBxAvatar->TabStop = false;
			// 
			// pnlMain
			// 
			this->pnlMain->Controls->Add(this->grpBxCurrentCharacters);
			this->pnlMain->Controls->Add(this->pnlAllies);
			this->pnlMain->Controls->Add(this->pnlProperties);
			this->pnlMain->Controls->Add(this->pctrBxAvatar);
			this->pnlMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlMain->Location = System::Drawing::Point(0, 24);
			this->pnlMain->Name = L"pnlMain";
			this->pnlMain->Size = System::Drawing::Size(704, 538);
			this->pnlMain->TabIndex = 6;
			// 
			// grpBxCurrentCharacters
			// 
			this->grpBxCurrentCharacters->Location = System::Drawing::Point(416, 0);
			this->grpBxCurrentCharacters->Name = L"grpBxCurrentCharacters";
			this->grpBxCurrentCharacters->Size = System::Drawing::Size(288, 275);
			this->grpBxCurrentCharacters->TabIndex = 7;
			this->grpBxCurrentCharacters->TabStop = false;
			this->grpBxCurrentCharacters->Text = L"Current Characters";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 562);
			this->Controls->Add(this->pnlMain);
			this->Controls->Add(this->menu);
			this->MainMenuStrip = this->menu;
			this->Name = L"Form1";
			this->Text = L"Goblet of Fire";
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->pnlAllies->ResumeLayout(false);
			this->pnlAllies->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pctrBxAvatar))->EndInit();
			this->pnlMain->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Add ally button click
private: System::Void AddAlly( System::Object^ sender, System::EventArgs^ e)
		{
			cmbBxListOfAllies = gcnew ComboBox;
			cmbBxListOfAllies->Size = System::Drawing::Size(100,25);
			cmbBxListOfAllies->AutoSize = true;
			cmbBxListOfAllies->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::selectedAnAlly);
			pnlAllies->Controls->Add(cmbBxListOfAllies);
			cmbBxListOfAllies->Location = System::Drawing::Point(170,15);
			for (int i = 0; i < currentNumberOfCharacters; i++)
			{
				if(rd[i]->Checked && rd[i]->Text == aCharArray[i]->displayName() )
					continue;
				else
					cmbBxListOfAllies->Items->Add(aCharArray[i]->displayName());
			}
		}
		//Character->create
private: System::Void createToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(names->getCharacterTypes()[0]+names->getCharacterName(),names->getCharacterTypes()[0], type );
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		}
		 //Create->weapon
private: System::Void weaponToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ObjectsCreated[currentNumberOfObjects] = gcnew IWeapon( names->getWeaponTypes()[0]+names->getWeaponName(),names->getWeaponTypes()[0]);
			 
			 aCharArray[0]->addItem( (Entity^)ObjectsCreated[currentNumberOfObjects]);
			 ++currentNumberOfObjects;
		 }
		 //Create->MagicalObject
private: System::Void magicalObjectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ObjectsCreated[currentNumberOfObjects] = gcnew IMagicalObject( names->getMagicalObjectsTypes()[0]+names->getMagicalObjectName(),names->getMagicalObjectsTypes()[0]);
			 ++currentNumberOfObjects;
		 }
		 //create->Spell
private: System::Void spellToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ObjectsCreated[currentNumberOfObjects] = gcnew ISpell(names->getSpellTypes()[0]+names->getSpellName(), names->getSpellTypes()[0]);
			 ++currentNumberOfObjects;
		 }
		 //Create->Character->Wizard
private: System::Void wizardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(names->getCharacterTypes()[0]+names->getCharacterName(),names->getCharacterTypes()[0], type );
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //Click event handler when one of the buttons was clicked to present user with information about
		 //currently selectd item
private: System::Void btn_ClickItems( System::Object^ sender, System::EventArgs^ e)
		 {
			 int found = 0;
			 pnlAllies->Controls->Clear();
			 pnlProperties->Controls->Clear();
			 if (!pnlProperties->Controls->Contains(tmp))
			 {
				 tmp = gcnew System::Windows::Forms::Label();
				 tmp->AutoSize = true;
				 tmp->Size = System::Drawing::Size(10,10);
				 tmp->Location = System::Drawing::Point(15,15);
				 pnlProperties->Controls->Add(tmp);
				 for (int i = 0; i < 4; i++)
				 {
					 if (rd[i])
					 {
						 if (rd[i]->Checked)
							 found = i;
					 }
				 }
				 for (int j = 0; j < currentNumberOfObjects; j++)
				 {
					 if (ObjectsCreated[j]->displayName()==rd[found]->Text)
					 {
						 tmp->Text = ObjectsCreated[j]->displayProperties();
					 }
				 }
			 } 
		 }
		 //the same as above with the difference regarding to the created characters
private: System::Void btn_ClickCharacters( System::Object^ sender, System::EventArgs^ e)
		{
			int found = 0;
			pnlProperties->Controls->Clear();
			pnlAllies->Controls->Clear();
			if (!pnlProperties->Controls->Contains(tmp))
			 {
				 //displaying the properties
				 tmp = gcnew System::Windows::Forms::Label();
				 tmp->AutoSize = true;
				 tmp->Size = System::Drawing::Size(10,10);
				 tmp->Location = System::Drawing::Point(15,15);
				 pnlProperties->Controls->Add(tmp);

				 //displaying the Allies label
				lblAllies = gcnew System::Windows::Forms::Label();
				lblAllies->AutoSize = true;
				lblAllies->Size = System::Drawing::Size(10,10);
				lblAllies->Location = System::Drawing::Point(15,15);
				pnlAllies->Controls->Add(lblAllies);

				//displaying the add Allies button
				btnAddAllies = gcnew Button;
				btnAddAllies->AutoSize = true;
				btnAddAllies->Size = System::Drawing::Size(10,10);
				btnAddAllies->Location = System::Drawing::Point(70,15);
				btnAddAllies->Text = L"Add Allies";
				btnAddAllies->Click += gcnew System::EventHandler(this, &Form1::AddAlly);
				pnlAllies->Controls->Add(btnAddAllies);
				 for (int i = 0; i < 4; i++)
				 {
					 if (rd[i])
					 {
						 if (rd[i]->Checked)
						 {
							 found = i;
							 tmp->Text = aCharArray[i]->displayProperties();
							 lblAllies->Text = aCharArray[i]->getAllies();
							 pctrBxAvatar->ImageLocation = aCharArray[i]->getAvatar();
						 }
					 }
				 }
				 for (int j = 0; j < currentNumberOfCharacters; j++)
				 {
					 if (aCharArray[j]->displayName() == rd[found]->Text)
					 {
						 tmp->Text = aCharArray[j]->displayProperties();
					 }
				 }
			 }
		}
		 //Create->Character->witch
private: System::Void witchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			type = E_CHARACTER_TYPE::e_CT_Witch;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //create->character->hero
private: System::Void heroToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			type = E_CHARACTER_TYPE::e_CT_Hero;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //create->character->heroine
private: System::Void heroineToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			type = E_CHARACTER_TYPE::e_CT_Heroine;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //Create->character->Sponsor
private: System::Void sponsorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 type = E_CHARACTER_TYPE::e_CT_Sponsor;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //create->character->Worker
private: System::Void workerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 type = E_CHARACTER_TYPE::e_CT_Worker;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		 //create->character->Creature
private: System::Void creatureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 type = E_CHARACTER_TYPE::e_CT_Creature;
			if (currentNumberOfCharacters < 3)
			{
				this->aCharArray[currentNumberOfCharacters] = gcnew ICharacter(
					names->getCharacterTypes()[type]+names->getCharacterName(),
					names->getCharacterTypes()[type], type 
					);
				++currentNumberOfCharacters;
			}
			else
			{
				MessageBox::Show(this,"We are sorry but you have reached limit of  possible creation of Characters,\nif you want to create new character please delete existing one.","Error creating Character",MessageBoxButtons::OK);
			}
		 }
		//Delete Item click
private: System::Void itemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (currentNumberOfObjects > 0)
			 {
				 delete this->ObjectsCreated[currentNumberOfObjects];
				 --currentNumberOfObjects;
			 }
		 }
		 //Delete character click
private: System::Void characterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (currentNumberOfCharacters > 0)
			 {
				 delete this->aCharArray[currentNumberOfCharacters];
				 --currentNumberOfCharacters; 
			 }
		 }
		 //Display->Character
private: System::Void charactersToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pnlAllies->Controls->Clear();
			 pnlProperties->Controls->Clear();
			grpBxCurrentCharacters->Controls->Clear();
			pnlMain->Show();
			for( int i = 0; i < currentNumberOfCharacters; ++i)
			 {
				 rd[i] = gcnew RadioButton();
				 rd[i]->AutoSize = true;
				 rd[i]->Size = System::Drawing::Size(10,10);
				 rd[i]->Location = System::Drawing::Point(0,15 + (i*25));
				 rd[i]->Appearance = System::Windows::Forms::Appearance::Button;
				 rd[i]->Text = aCharArray[i]->displayName();
				 rd[i]->CheckedChanged += gcnew System::EventHandler(this, &Form1::btn_ClickCharacters);
				 this->Controls->Add(rd[i]);
				 this->grpBxCurrentCharacters->Controls->Add(rd[i]);
			 }
		 }
		//Display->items
private: System::Void itemsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 pnlAllies->Controls->Clear();
			 grpBxCurrentCharacters->Controls->Clear();
			 pnlProperties->Controls->Clear();
			 if(grpBxCurrentCharacters->Text == "Current Characters")
			 {
				 grpBxCurrentCharacters->Controls->Clear();
				 grpBxCurrentCharacters->Text = "Current Items";
			 }
			pnlMain->Show();
			for( int i = 0; i < currentNumberOfObjects; ++i)
			 {
				 rd[i] = gcnew RadioButton();
				 rd[i]->AutoSize = true;
				 rd[i]->Size = System::Drawing::Size(10,10);
				 rd[i]->Location = System::Drawing::Point(0,15 + (i*25));
				 rd[i]->Appearance = System::Windows::Forms::Appearance::Button;
				 rd[i]->Text = ObjectsCreated[i]->displayName();
				 rd[i]->CheckedChanged += gcnew System::EventHandler(this, &Form1::btn_ClickItems);
				 this->Controls->Add(rd[i]);
				 this->grpBxCurrentCharacters->Controls->Add(rd[i]);
			 }
			//example of one of the buttons being clicked
			//this->itemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::itemsToolStripMenuItem_Click);
			//this is an example of how ot add the picture change for every object in the game
			//this->pctrBxAvatar->ImageLocation = L"..\\pictures\\witch.bmp";
		 }
		 //Selected an ally
private: System::Void selectedAnAlly( System::Object^ sender, System::EventArgs^ e)
		 {
			 btnAdd = gcnew Button;
			 btnAdd->Text = "+";
			 btnAdd->Location = System::Drawing::Point(180,55);
			 btnAdd->AutoSize = true;
			 btnAdd->Click += gcnew System::EventHandler(this,&Form1::btnAddOnClik);
			 pnlAllies->Controls->Add(btnAdd);

			 btnDel = gcnew Button;
			 btnDel->Text = "-";
			 btnDel->Location = System::Drawing::Point(180,85);
			 btnDel->AutoSize = true;
			 btnDel->Click += gcnew System::EventHandler(this,&Form1::btnDelOnClick);
			 pnlAllies->Controls->Add(btnDel);
		 }
		 //Selected an Ally OnClick
private: System::Void btnAddOnClik(System::Object^ sender, System::EventArgs^e)
		 {
			 int found = 0;
			 for (int i = 0; i < currentNumberOfCharacters; i++)
			 {
				 if (rd[i]->Checked)
					 found = i;
			 }
			 for (int j = 0; j < currentNumberOfCharacters; j++)
			 {
				 if (cmbBxListOfAllies->SelectedText->ToString() == aCharArray[j]->displayName())
				 {
					 aCharArray[found]->addAlly(aCharArray[j]);
				 }
			 }
			 aCharArray[found]->addAlly(character1);
		 }
private: System::Void btnDelOnClick(System::Object^ sender, System::EventArgs^e)
		 {
			 int found = 0;

			 for (int i = 0; i < currentNumberOfCharacters; i++)
				 if (rd[i]->Checked)
					 found = i;

			 for (int j = 0; j < currentNumberOfCharacters; j++)
				 if (cmbBxListOfAllies->SelectedText->ToString() == aCharArray[j]->displayName())
					 aCharArray[found]->deleteAlly();
			 aCharArray[found]->deleteAlly();
			 aCharArray[0]->deleteItem();
		 }
};
}

