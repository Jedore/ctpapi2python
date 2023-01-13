/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_thosttraderapi_WRAP_H_
#define SWIG_thosttraderapi_WRAP_H_

#include <map>
#include <string>


class SwigDirector_CThostFtdcTraderSpi : public CThostFtdcTraderSpi, public Swig::Director {

public:
    SwigDirector_CThostFtdcTraderSpi(PyObject *self);
    virtual void OnFrontConnected();
    virtual void OnFrontDisconnected(int nReason);
    virtual void OnHeartBeatWarning(int nTimeLapse);
    virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryProduct(CThostFtdcProductField *pProduct,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTraderOffer(CThostFtdcTraderOfferField *pTraderOffer,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);
    virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);
    virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus);
    virtual void OnRtnBulletin(CThostFtdcBulletinField *pBulletin);
    virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo);
    virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder);
    virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder);
    virtual void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote);
    virtual void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp);
    virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken);
    virtual void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose);
    virtual void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction);
    virtual void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer);
    virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer);
    virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer);
    virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer);
    virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount);
    virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount,CThostFtdcRspInfoField *pRspInfo);
    virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal);
    virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount);
    virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount);
    virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount);
    virtual void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField *pInstrument,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField *pCombPromotionParam,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField *pRiskSettleInvstPosition,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField *pRiskSettleProductStatus,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField *pSPBMFutureParameter,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField *pSPBMOptionParameter,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField *pSPBMIntraParameter,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField *pSPBMInterParameter,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField *pSPBMPortfDefinition,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField *pSPBMInvestorPortfDef,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField *pInvestorPortfMarginRatio,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);
    virtual void OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField *pInvestorProdSPBMDetail,CThostFtdcRspInfoField *pRspInfo,int nRequestID,bool bIsLast);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class CThostFtdcTraderSpi doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[138];
#endif

};


#endif
