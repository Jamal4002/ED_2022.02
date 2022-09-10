#include <iostream>

#include "Array.h"
#include "Matrix2D.h"

using namespace std;

int main()
{
    int tamanho;
    unsigned int idxLin, idxCol, nLin, nCol;

    //---------------------------Quest�o 2-------------------------------------
    Array<char>  vChar(3);

    tamanho = vChar.getSize();
    for(int i=0; i<tamanho; i++)
        vChar.setElemento(i, (char)(65 + i));

    for(int i=0; i<tamanho; i++)
        cout << vChar.getElemento(i) << endl;

    cout << "Soma: " << (int)vChar.getSoma() << endl;
    cout << "Produto: " << (int)vChar.getProduto() << endl;

    //-----------------------------------------------------------------
    Array<char*>  vCharPointer(3);

    tamanho = vCharPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vCharPointer.setElemento(i, new char(65 + i));

    for(int i=0; i<tamanho; i++)
    {
        cout << "Pointer : " << (void*)vCharPointer.getElemento(i) << endl;
        cout << "char    : " << *vCharPointer.getElemento(i) << endl;
    }

    for(int i=0; i<tamanho; i++)
        delete vCharPointer.getElemento(i);

    //-----------------------------------------------------------------
    Array<int>   vInt(5);

    tamanho = vInt.getSize();
    for(int i=0; i<tamanho; i++)
        vInt.setElemento(i, i);

    for(int i=0; i<tamanho; i++)
        cout << vInt.getElemento(i) << endl;

    cout << "Soma: " << vInt.getSoma() << endl;
    cout << "Produto: " << vInt.getProduto() << endl;
    vInt.multiplicarK((int) 2);
    cout << "Soma depois da multiplica��o por 2: " << vInt.getSoma() << endl;
    cout << "Produto depois da multiplica��o por 2: " << vInt.getProduto() << endl;

    //-----------------------------------------------------------------
    Array<int*>   vIntPointer(5);

    tamanho = vIntPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vIntPointer.setElemento(i, new int(i));

    for(int i=0; i<tamanho; i++)
    {
        cout << "Pointer: " << vIntPointer.getElemento(i) << endl;
        cout << "int    : " << *(vIntPointer.getElemento(i)) << endl;
    }

    for(int i=0; i<tamanho; i++)
        delete vIntPointer.getElemento(i);

    //-----------------------------------------------------------------
    Array<float> vFloat(6);

    tamanho = vFloat.getSize();
    for(int i=0; i<tamanho; i++)
        vFloat.setElemento(i, i/10.0f);

    for(int i=0; i<tamanho; i++)
        cout << vFloat.getElemento(i) << endl;

    cout << "Soma: " << vFloat.getSoma() << endl;
    cout << "Produto: " << vFloat.getProduto() << endl;
    vFloat.multiplicarK((int) 2);
    cout << "Soma depois da multiplica��o por 2: " << vFloat.getSoma() << endl;
    cout << "Produto depois da multiplica��o por 2: " << vFloat.getProduto() << endl;

    //-----------------------------------------------------------------
    Array<float*> vFloatPointer(6);

    tamanho = vFloatPointer.getSize();
    for(int i=0; i<tamanho; i++)
        vFloatPointer.setElemento(i, new float(i/10.0f));

    for(int i=0; i<tamanho; i++)
    {
        cout<< "Pointer: " << vFloatPointer.getElemento(i) << endl;
        cout <<"float  : " << *(vFloatPointer.getElemento(i)) << endl;
    }

    for(int i=0; i<tamanho; i++)
        delete vFloatPointer.getElemento(i);

    //----------- Quest�o 3 -------------------

    Matrix2D<char>  mChar(3, 3);

    nLin = mChar.getNLin();
    nCol = mChar.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mChar.setElemento(idxLin, idxCol, (char)(65 + idxLin));

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mChar.getElemento(idxLin, idxCol) << endl;


    cout << "SOMA DO CASCALHO (CHAR): " << mChar.getSomaM() << endl;
    cout << "PRODUTO DO CASCALHO (CHAR): " << mChar.getProdutoM() << endl;

    if(mChar.VerificaMatrizNula()==1)
    {
        cout << "� uma matriz nula" << endl;
    }
    else
        cout << "N�o � uma matriz nula" << endl;

    if(mChar.VerificaMatrizDiagonal()==1)
    {
        cout << "� uma matriz diagonal" << endl;
    }
    else
        cout << "N�o � uma matriz diagonal" << endl;

    if(mChar.VerificaMatrizIdentidade()==1){
        cout << "� uma matriz identidade" << endl;
    }
    else
        cout << "N�o � uma matriz identidade" << endl;

    if(mChar.VerificaMatrizEscalar()==1){
        cout << "� uma matriz escalar" << endl;
    }
    else
        cout << "N�o � uma matriz escalar" << endl;

    if(mChar.VerificaMatrizSimetrica()==1){
        cout << "� uma matriz sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz sim�trica" << endl;

    if(mChar.VerificaMatrizAntiSimetrica()==1){
        cout << "� uma matriz Anti-Sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz Anti-Sim�trica" << endl;

    if(mChar.VerificaMatrizTriangularSuperior()==1){
        cout << "� uma matriz Triangular Superior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Superior" << endl;

    if(mChar.VerificaMatrizTriangularInferior()==1){
        cout << "� uma matriz Triangular Inferior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Inferior" << endl;

    //-----------------------------------------------------------------
    Matrix2D<char*>  mCharp(3, 3);

    nLin = mCharp.getNLin();
    nCol = mCharp.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mCharp.setElemento(idxLin, idxCol, new char(97 + idxLin));

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << *((char*) mCharp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mCharp.getElemento(idxLin, idxCol);

    //-----------------------------------------------------------------
    Matrix2D<int>   mInt(5, 5);

    nLin = mInt.getNLin();
    nCol = mInt.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mInt.setElemento(idxLin, idxCol, idxLin);


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << mInt.getElemento(idxLin, idxCol) << endl;


    cout << "SOMA DO CASCALHO (INT): " << mInt.getSomaM() << endl;
    cout << "PRODUTO DO CASCALHO (INT): " << mInt.getProdutoM() << endl;

    if(mInt.VerificaMatrizNula()==1)
    {
        cout << "� uma matriz nula" << endl;
    }
    else
        cout << "N�o � uma matriz nula" << endl;

    if(mInt.VerificaMatrizDiagonal()==1)
    {
        cout << "� uma matriz diagonal" << endl;
    }
    else
        cout << "N�o � uma matriz diagonal" << endl;

    if(mInt.VerificaMatrizIdentidade()==1){
        cout << "� uma matriz identidade" << endl;
    }
    else
        cout << "N�o � uma matriz identidade" << endl;

    if(mInt.VerificaMatrizEscalar()==1){
        cout << "� uma matriz escalar" << endl;
    }
    else
        cout << "N�o � uma matriz escalar" << endl;

    if(mInt.VerificaMatrizSimetrica()==1){
        cout << "� uma matriz sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz sim�trica" << endl;

    if(mInt.VerificaMatrizAntiSimetrica()==1){
        cout << "� uma matriz Anti-Sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz Anti-Sim�trica" << endl;

    if(mInt.VerificaMatrizTriangularSuperior()==1){
        cout << "� uma matriz Triangular Superior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Superior" << endl;

    if(mInt.VerificaMatrizTriangularInferior()==1){
        cout << "� uma matriz Triangular Inferior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Inferior" << endl;

    //-----------------------------------------------------------------
    Matrix2D<int*>   mIntp(5, 5);

    nLin = mInt.getNLin();
    nCol = mInt.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mIntp.setElemento(idxLin, idxCol, new int(idxLin));


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            cout << *(mIntp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mIntp.getElemento(idxLin, idxCol);

    //-----------------------------------------------------------------
    Matrix2D<float> mFloat(6, 6);

    nLin = mFloat.getNLin();
    nCol = mFloat.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mFloat.setElemento(idxLin, idxCol, idxLin/10.0f);


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
        cout << mFloat.getElemento(idxLin, idxCol) << endl;

    cout << "SOMA DO CASCALHO (FLOAT): " << mFloat.getSomaM() << endl;
    cout << "PRODUTO DO CASCALHO (FLOAT): " << mFloat.getProdutoM() << endl;

    if(mFloat.VerificaMatrizNula()==1)
    {
        cout << "� uma matriz nula" << endl;
    }
    else
        cout << "N�o � uma matriz nula" << endl;

    if(mFloat.VerificaMatrizDiagonal()==1)
    {
        cout << "� uma matriz diagonal" << endl;
    }
    else
        cout << "N�o � uma matriz diagonal" << endl;

    if(mFloat.VerificaMatrizIdentidade()==1){
        cout << "� uma matriz identidade" << endl;
    }
    else
        cout << "N�o � uma matriz identidade" << endl;

    if(mFloat.VerificaMatrizEscalar()==1){
        cout << "� uma matriz escalar" << endl;
    }
    else
        cout << "N�o � uma matriz escalar" << endl;

    if(mFloat.VerificaMatrizSimetrica()==1){
        cout << "� uma matriz sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz sim�trica" << endl;

    if(mFloat.VerificaMatrizAntiSimetrica()==1){
        cout << "� uma matriz Anti-Sim�trica" << endl;
    }
    else
        cout << "N�o � uma matriz Anti-Sim�trica" << endl;

    if(mFloat.VerificaMatrizTriangularSuperior()==1){
        cout << "� uma matriz Triangular Superior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Superior" << endl;

    if(mFloat.VerificaMatrizTriangularInferior()==1){
        cout << "� uma matriz Triangular Inferior" << endl;
    }
    else
        cout << "N�o � uma matriz Triangular Inferior" << endl;

    //-----------------------------------------------------------------
    Matrix2D<float*> mFloatp(6, 6);

    nLin = mFloat.getNLin();
    nCol = mFloat.getNCol();

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            mFloatp.setElemento(idxLin, idxCol, new float(idxLin/10.0));


    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
        cout << *(mFloatp.getElemento(idxLin, idxCol)) << endl;

    for(idxLin=0; idxLin<nLin; idxLin++)
        for(idxCol=0; idxCol<nCol; idxCol++)
            delete mFloatp.getElemento(idxLin, idxCol);

    return 0;
}
