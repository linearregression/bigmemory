// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ReorderRIntMatrix
void ReorderRIntMatrix(SEXP matrixVector, SEXP nrow, SEXP ncol, SEXP orderVec);
RcppExport SEXP bigmemory_ReorderRIntMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP orderVecSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ncol(ncolSEXP );
        Rcpp::traits::input_parameter< SEXP >::type orderVec(orderVecSEXP );
        ReorderRIntMatrix(matrixVector, nrow, ncol, orderVec);
    }
    return R_NilValue;
END_RCPP
}
// ReorderRNumericMatrix
void ReorderRNumericMatrix(SEXP matrixVector, SEXP nrow, SEXP ncol, SEXP orderVec);
RcppExport SEXP bigmemory_ReorderRNumericMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP orderVecSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ncol(ncolSEXP );
        Rcpp::traits::input_parameter< SEXP >::type orderVec(orderVecSEXP );
        ReorderRNumericMatrix(matrixVector, nrow, ncol, orderVec);
    }
    return R_NilValue;
END_RCPP
}
// ReorderBigMatrix
void ReorderBigMatrix(SEXP address, SEXP orderVec);
RcppExport SEXP bigmemory_ReorderBigMatrix(SEXP addressSEXP, SEXP orderVecSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type orderVec(orderVecSEXP );
        ReorderBigMatrix(address, orderVec);
    }
    return R_NilValue;
END_RCPP
}
// OrderRIntMatrix
SEXP OrderRIntMatrix(SEXP matrixVector, SEXP nrow, SEXP columns, SEXP naLast, SEXP decreasing);
RcppExport SEXP bigmemory_OrderRIntMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP columnsSEXP, SEXP naLastSEXP, SEXP decreasingSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type columns(columnsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type naLast(naLastSEXP );
        Rcpp::traits::input_parameter< SEXP >::type decreasing(decreasingSEXP );
        SEXP __result = OrderRIntMatrix(matrixVector, nrow, columns, naLast, decreasing);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// OrderRNumericMatrix
SEXP OrderRNumericMatrix(SEXP matrixVector, SEXP nrow, SEXP columns, SEXP naLast, SEXP decreasing);
RcppExport SEXP bigmemory_OrderRNumericMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP columnsSEXP, SEXP naLastSEXP, SEXP decreasingSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type columns(columnsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type naLast(naLastSEXP );
        Rcpp::traits::input_parameter< SEXP >::type decreasing(decreasingSEXP );
        SEXP __result = OrderRNumericMatrix(matrixVector, nrow, columns, naLast, decreasing);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// OrderBigMatrix
SEXP OrderBigMatrix(SEXP address, SEXP columns, SEXP naLast, SEXP decreasing);
RcppExport SEXP bigmemory_OrderBigMatrix(SEXP addressSEXP, SEXP columnsSEXP, SEXP naLastSEXP, SEXP decreasingSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type columns(columnsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type naLast(naLastSEXP );
        Rcpp::traits::input_parameter< SEXP >::type decreasing(decreasingSEXP );
        SEXP __result = OrderBigMatrix(address, columns, naLast, decreasing);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CCleanIndices
SEXP CCleanIndices(SEXP indices, SEXP rc);
RcppExport SEXP bigmemory_CCleanIndices(SEXP indicesSEXP, SEXP rcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type indices(indicesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rc(rcSEXP );
        SEXP __result = CCleanIndices(indices, rc);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// HasRowColNames
SEXP HasRowColNames(SEXP address);
RcppExport SEXP bigmemory_HasRowColNames(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = HasRowColNames(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetIndexRowNames
SEXP GetIndexRowNames(SEXP address, SEXP indices);
RcppExport SEXP bigmemory_GetIndexRowNames(SEXP addressSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type indices(indicesSEXP );
        SEXP __result = GetIndexRowNames(address, indices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetIndexColNames
SEXP GetIndexColNames(SEXP address, SEXP indices);
RcppExport SEXP bigmemory_GetIndexColNames(SEXP addressSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type indices(indicesSEXP );
        SEXP __result = GetIndexColNames(address, indices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetColumnNamesBM
SEXP GetColumnNamesBM(SEXP address);
RcppExport SEXP bigmemory_GetColumnNamesBM(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = GetColumnNamesBM(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetRowNamesBM
SEXP GetRowNamesBM(SEXP address);
RcppExport SEXP bigmemory_GetRowNamesBM(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = GetRowNamesBM(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SetColumnNames
void SetColumnNames(SEXP address, SEXP columnNames);
RcppExport SEXP bigmemory_SetColumnNames(SEXP addressSEXP, SEXP columnNamesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type columnNames(columnNamesSEXP );
        SetColumnNames(address, columnNames);
    }
    return R_NilValue;
END_RCPP
}
// SetRowNames
void SetRowNames(SEXP address, SEXP rowNames);
RcppExport SEXP bigmemory_SetRowNames(SEXP addressSEXP, SEXP rowNamesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowNames(rowNamesSEXP );
        SetRowNames(address, rowNames);
    }
    return R_NilValue;
END_RCPP
}
// IsReadOnly
SEXP IsReadOnly(SEXP bigMatAddr);
RcppExport SEXP bigmemory_IsReadOnly(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = IsReadOnly(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CIsSubMatrix
SEXP CIsSubMatrix(SEXP bigMatAddr);
RcppExport SEXP bigmemory_CIsSubMatrix(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = CIsSubMatrix(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CGetNrow
SEXP CGetNrow(SEXP bigMatAddr);
RcppExport SEXP bigmemory_CGetNrow(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = CGetNrow(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CGetNcol
SEXP CGetNcol(SEXP bigMatAddr);
RcppExport SEXP bigmemory_CGetNcol(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = CGetNcol(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CGetType
SEXP CGetType(SEXP bigMatAddr);
RcppExport SEXP bigmemory_CGetType(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = CGetType(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// IsSharedMemoryBigMatrix
SEXP IsSharedMemoryBigMatrix(SEXP bigMatAddr);
RcppExport SEXP bigmemory_IsSharedMemoryBigMatrix(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = IsSharedMemoryBigMatrix(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// IsFileBackedBigMatrix
SEXP IsFileBackedBigMatrix(SEXP bigMatAddr);
RcppExport SEXP bigmemory_IsFileBackedBigMatrix(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = IsFileBackedBigMatrix(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// IsSeparated
SEXP IsSeparated(SEXP bigMatAddr);
RcppExport SEXP bigmemory_IsSeparated(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = IsSeparated(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SetRowOffsetInfo
void SetRowOffsetInfo(SEXP bigMatAddr, SEXP rowOffset, SEXP numRows);
RcppExport SEXP bigmemory_SetRowOffsetInfo(SEXP bigMatAddrSEXP, SEXP rowOffsetSEXP, SEXP numRowsSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowOffset(rowOffsetSEXP );
        Rcpp::traits::input_parameter< SEXP >::type numRows(numRowsSEXP );
        SetRowOffsetInfo(bigMatAddr, rowOffset, numRows);
    }
    return R_NilValue;
END_RCPP
}
// SetColumnOffsetInfo
void SetColumnOffsetInfo(SEXP bigMatAddr, SEXP colOffset, SEXP numCols);
RcppExport SEXP bigmemory_SetColumnOffsetInfo(SEXP bigMatAddrSEXP, SEXP colOffsetSEXP, SEXP numColsSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colOffset(colOffsetSEXP );
        Rcpp::traits::input_parameter< SEXP >::type numCols(numColsSEXP );
        SetColumnOffsetInfo(bigMatAddr, colOffset, numCols);
    }
    return R_NilValue;
END_RCPP
}
// GetRowOffset
SEXP GetRowOffset(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetRowOffset(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetRowOffset(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetColOffset
SEXP GetColOffset(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetColOffset(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetColOffset(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetTotalColumns
SEXP GetTotalColumns(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetTotalColumns(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetTotalColumns(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetTotalRows
SEXP GetTotalRows(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetTotalRows(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetTotalRows(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetTypeString
SEXP GetTypeString(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetTypeString(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetTypeString(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// MWhichBigMatrix
SEXP MWhichBigMatrix(SEXP bigMatAddr, SEXP selectColumn, SEXP minVal, SEXP maxVal, SEXP chkMin, SEXP chkMax, SEXP opVal);
RcppExport SEXP bigmemory_MWhichBigMatrix(SEXP bigMatAddrSEXP, SEXP selectColumnSEXP, SEXP minValSEXP, SEXP maxValSEXP, SEXP chkMinSEXP, SEXP chkMaxSEXP, SEXP opValSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type selectColumn(selectColumnSEXP );
        Rcpp::traits::input_parameter< SEXP >::type minVal(minValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type maxVal(maxValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMin(chkMinSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMax(chkMaxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type opVal(opValSEXP );
        SEXP __result = MWhichBigMatrix(bigMatAddr, selectColumn, minVal, maxVal, chkMin, chkMax, opVal);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// MWhichRIntMatrix
SEXP MWhichRIntMatrix(SEXP matrixVector, SEXP nrow, SEXP selectColumn, SEXP minVal, SEXP maxVal, SEXP chkMin, SEXP chkMax, SEXP opVal);
RcppExport SEXP bigmemory_MWhichRIntMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP selectColumnSEXP, SEXP minValSEXP, SEXP maxValSEXP, SEXP chkMinSEXP, SEXP chkMaxSEXP, SEXP opValSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type selectColumn(selectColumnSEXP );
        Rcpp::traits::input_parameter< SEXP >::type minVal(minValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type maxVal(maxValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMin(chkMinSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMax(chkMaxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type opVal(opValSEXP );
        SEXP __result = MWhichRIntMatrix(matrixVector, nrow, selectColumn, minVal, maxVal, chkMin, chkMax, opVal);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// MWhichRNumericMatrix
SEXP MWhichRNumericMatrix(SEXP matrixVector, SEXP nrow, SEXP selectColumn, SEXP minVal, SEXP maxVal, SEXP chkMin, SEXP chkMax, SEXP opVal);
RcppExport SEXP bigmemory_MWhichRNumericMatrix(SEXP matrixVectorSEXP, SEXP nrowSEXP, SEXP selectColumnSEXP, SEXP minValSEXP, SEXP maxValSEXP, SEXP chkMinSEXP, SEXP chkMaxSEXP, SEXP opValSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type matrixVector(matrixVectorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type nrow(nrowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type selectColumn(selectColumnSEXP );
        Rcpp::traits::input_parameter< SEXP >::type minVal(minValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type maxVal(maxValSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMin(chkMinSEXP );
        Rcpp::traits::input_parameter< SEXP >::type chkMax(chkMaxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type opVal(opValSEXP );
        SEXP __result = MWhichRNumericMatrix(matrixVector, nrow, selectColumn, minVal, maxVal, chkMin, chkMax, opVal);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CCountLines
SEXP CCountLines(SEXP fileName);
RcppExport SEXP bigmemory_CCountLines(SEXP fileNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP );
        SEXP __result = CCountLines(fileName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ReadMatrix
SEXP ReadMatrix(SEXP fileName, SEXP bigMatAddr, SEXP firstLine, SEXP numLines, SEXP numCols, SEXP separator, SEXP hasRowNames, SEXP useRowNames);
RcppExport SEXP bigmemory_ReadMatrix(SEXP fileNameSEXP, SEXP bigMatAddrSEXP, SEXP firstLineSEXP, SEXP numLinesSEXP, SEXP numColsSEXP, SEXP separatorSEXP, SEXP hasRowNamesSEXP, SEXP useRowNamesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type firstLine(firstLineSEXP );
        Rcpp::traits::input_parameter< SEXP >::type numLines(numLinesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type numCols(numColsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separator(separatorSEXP );
        Rcpp::traits::input_parameter< SEXP >::type hasRowNames(hasRowNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type useRowNames(useRowNamesSEXP );
        SEXP __result = ReadMatrix(fileName, bigMatAddr, firstLine, numLines, numCols, separator, hasRowNames, useRowNames);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// WriteMatrix
void WriteMatrix(SEXP bigMatAddr, SEXP fileName, SEXP rowNames, SEXP colNames, SEXP sep);
RcppExport SEXP bigmemory_WriteMatrix(SEXP bigMatAddrSEXP, SEXP fileNameSEXP, SEXP rowNamesSEXP, SEXP colNamesSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowNames(rowNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sep(sepSEXP );
        WriteMatrix(bigMatAddr, fileName, rowNames, colNames, sep);
    }
    return R_NilValue;
END_RCPP
}
// GetMatrixElements
SEXP GetMatrixElements(SEXP bigMatAddr, SEXP col, SEXP row);
RcppExport SEXP bigmemory_GetMatrixElements(SEXP bigMatAddrSEXP, SEXP colSEXP, SEXP rowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        SEXP __result = GetMatrixElements(bigMatAddr, col, row);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetMatrixRows
SEXP GetMatrixRows(SEXP bigMatAddr, SEXP row);
RcppExport SEXP bigmemory_GetMatrixRows(SEXP bigMatAddrSEXP, SEXP rowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        SEXP __result = GetMatrixRows(bigMatAddr, row);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetMatrixCols
SEXP GetMatrixCols(SEXP bigMatAddr, SEXP col);
RcppExport SEXP bigmemory_GetMatrixCols(SEXP bigMatAddrSEXP, SEXP colSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        SEXP __result = GetMatrixCols(bigMatAddr, col);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// GetMatrixAll
SEXP GetMatrixAll(SEXP bigMatAddr);
RcppExport SEXP bigmemory_GetMatrixAll(SEXP bigMatAddrSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        SEXP __result = GetMatrixAll(bigMatAddr);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SetMatrixElements
void SetMatrixElements(SEXP bigMatAddr, SEXP col, SEXP row, SEXP values);
RcppExport SEXP bigmemory_SetMatrixElements(SEXP bigMatAddrSEXP, SEXP colSEXP, SEXP rowSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP );
        SetMatrixElements(bigMatAddr, col, row, values);
    }
    return R_NilValue;
END_RCPP
}
// SetIndivMatrixElements
void SetIndivMatrixElements(SEXP bigMatAddr, SEXP col, SEXP row, SEXP values);
RcppExport SEXP bigmemory_SetIndivMatrixElements(SEXP bigMatAddrSEXP, SEXP colSEXP, SEXP rowSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP );
        SetIndivMatrixElements(bigMatAddr, col, row, values);
    }
    return R_NilValue;
END_RCPP
}
// SetMatrixAll
void SetMatrixAll(SEXP bigMatAddr, SEXP values);
RcppExport SEXP bigmemory_SetMatrixAll(SEXP bigMatAddrSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP );
        SetMatrixAll(bigMatAddr, values);
    }
    return R_NilValue;
END_RCPP
}
// SetMatrixCols
void SetMatrixCols(SEXP bigMatAddr, SEXP col, SEXP values);
RcppExport SEXP bigmemory_SetMatrixCols(SEXP bigMatAddrSEXP, SEXP colSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP );
        SetMatrixCols(bigMatAddr, col, values);
    }
    return R_NilValue;
END_RCPP
}
// SetMatrixRows
void SetMatrixRows(SEXP bigMatAddr, SEXP row, SEXP values);
RcppExport SEXP bigmemory_SetMatrixRows(SEXP bigMatAddrSEXP, SEXP rowSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type bigMatAddr(bigMatAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type values(valuesSEXP );
        SetMatrixRows(bigMatAddr, row, values);
    }
    return R_NilValue;
END_RCPP
}
// CreateSharedMatrix
SEXP CreateSharedMatrix(SEXP row, SEXP col, SEXP colnames, SEXP rownames, SEXP typeLength, SEXP ini, SEXP separated);
RcppExport SEXP bigmemory_CreateSharedMatrix(SEXP rowSEXP, SEXP colSEXP, SEXP colnamesSEXP, SEXP rownamesSEXP, SEXP typeLengthSEXP, SEXP iniSEXP, SEXP separatedSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colnames(colnamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rownames(rownamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typeLength(typeLengthSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ini(iniSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separated(separatedSEXP );
        SEXP __result = CreateSharedMatrix(row, col, colnames, rownames, typeLength, ini, separated);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CreateLocalMatrix
SEXP CreateLocalMatrix(SEXP row, SEXP col, SEXP colnames, SEXP rownames, SEXP typeLength, SEXP ini, SEXP separated);
RcppExport SEXP bigmemory_CreateLocalMatrix(SEXP rowSEXP, SEXP colSEXP, SEXP colnamesSEXP, SEXP rownamesSEXP, SEXP typeLengthSEXP, SEXP iniSEXP, SEXP separatedSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colnames(colnamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rownames(rownamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typeLength(typeLengthSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ini(iniSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separated(separatedSEXP );
        SEXP __result = CreateLocalMatrix(row, col, colnames, rownames, typeLength, ini, separated);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CreateFileBackedBigMatrix
SEXP CreateFileBackedBigMatrix(SEXP fileName, SEXP filePath, SEXP row, SEXP col, SEXP colnames, SEXP rownames, SEXP typeLength, SEXP ini, SEXP separated);
RcppExport SEXP bigmemory_CreateFileBackedBigMatrix(SEXP fileNameSEXP, SEXP filePathSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP colnamesSEXP, SEXP rownamesSEXP, SEXP typeLengthSEXP, SEXP iniSEXP, SEXP separatedSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< SEXP >::type filePath(filePathSEXP );
        Rcpp::traits::input_parameter< SEXP >::type row(rowSEXP );
        Rcpp::traits::input_parameter< SEXP >::type col(colSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colnames(colnamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rownames(rownamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typeLength(typeLengthSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ini(iniSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separated(separatedSEXP );
        SEXP __result = CreateFileBackedBigMatrix(fileName, filePath, row, col, colnames, rownames, typeLength, ini, separated);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CAttachSharedBigMatrix
SEXP CAttachSharedBigMatrix(SEXP sharedName, SEXP rows, SEXP cols, SEXP rowNames, SEXP colNames, SEXP typeLength, SEXP separated, SEXP readOnly);
RcppExport SEXP bigmemory_CAttachSharedBigMatrix(SEXP sharedNameSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP rowNamesSEXP, SEXP colNamesSEXP, SEXP typeLengthSEXP, SEXP separatedSEXP, SEXP readOnlySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sharedName(sharedNameSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rows(rowsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowNames(rowNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typeLength(typeLengthSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separated(separatedSEXP );
        Rcpp::traits::input_parameter< SEXP >::type readOnly(readOnlySEXP );
        SEXP __result = CAttachSharedBigMatrix(sharedName, rows, cols, rowNames, colNames, typeLength, separated, readOnly);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CAttachFileBackedBigMatrix
SEXP CAttachFileBackedBigMatrix(SEXP fileName, SEXP filePath, SEXP rows, SEXP cols, SEXP rowNames, SEXP colNames, SEXP typeLength, SEXP separated, SEXP readOnly);
RcppExport SEXP bigmemory_CAttachFileBackedBigMatrix(SEXP fileNameSEXP, SEXP filePathSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP rowNamesSEXP, SEXP colNamesSEXP, SEXP typeLengthSEXP, SEXP separatedSEXP, SEXP readOnlySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< SEXP >::type filePath(filePathSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rows(rowsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type cols(colsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowNames(rowNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colNames(colNamesSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typeLength(typeLengthSEXP );
        Rcpp::traits::input_parameter< SEXP >::type separated(separatedSEXP );
        Rcpp::traits::input_parameter< SEXP >::type readOnly(readOnlySEXP );
        SEXP __result = CAttachFileBackedBigMatrix(fileName, filePath, rows, cols, rowNames, colNames, typeLength, separated, readOnly);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// SharedName
SEXP SharedName(SEXP address);
RcppExport SEXP bigmemory_SharedName(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = SharedName(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// FileName
SEXP FileName(SEXP address);
RcppExport SEXP bigmemory_FileName(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = FileName(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Flush
SEXP Flush(SEXP address);
RcppExport SEXP bigmemory_Flush(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = Flush(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// IsShared
SEXP IsShared(SEXP address);
RcppExport SEXP bigmemory_IsShared(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = IsShared(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// isnil
SEXP isnil(SEXP address);
RcppExport SEXP bigmemory_isnil(SEXP addressSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type address(addressSEXP );
        SEXP __result = isnil(address);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// CDeepCopy
SEXP CDeepCopy(SEXP inAddr, SEXP outAddr, SEXP rowInds, SEXP colInds, SEXP typecast_warning);
RcppExport SEXP bigmemory_CDeepCopy(SEXP inAddrSEXP, SEXP outAddrSEXP, SEXP rowIndsSEXP, SEXP colIndsSEXP, SEXP typecast_warningSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inAddr(inAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type outAddr(outAddrSEXP );
        Rcpp::traits::input_parameter< SEXP >::type rowInds(rowIndsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type colInds(colIndsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type typecast_warning(typecast_warningSEXP );
        SEXP __result = CDeepCopy(inAddr, outAddr, rowInds, colInds, typecast_warning);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
