#ifndef __TA_HH__
#define __TA_HH__

#include <boost/serialization/access.hpp>
#include <ta-lib/ta_common.h>

#undef MAX
#undef MIN


namespace ta {

class ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & startIdx;
        ar & endIdx;
    }

public:
    int startIdx;
    int endIdx;

    ta() : startIdx( 0 ), endIdx ( 0 ) { }
    ta(int start, int end) : startIdx( start ), endIdx( end ) { }

    int start() {
        return startIdx;
    }

    int end() {
        return endIdx;
    }

    void update_index(int start, int end) {
        startIdx = start;
        endIdx = end;
    }

    void update(...) { }
    TA_RetCode run() { return (TA_RetCode) 0; }
};

class ACOS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ACOS() : ta() { };
    ACOS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ACOS *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ACOS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ACOS() : ta() { };
    S_ACOS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ACOS *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double *inVolume;
    double *getInVolume() { return inVolume; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AD() : ta() { };
    AD(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    AD *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    float *inVolume;
    float *getInVolume() { return inVolume; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AD() : ta() { };
    S_AD(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    S_AD *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADD() : ta() { };
    ADD(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    ADD *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADD() : ta() { };
    S_ADD(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADD *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double *inVolume;
    double *getInVolume() { return inVolume; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADOSC() : ta() { };
    ADOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, double *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    float *inVolume;
    float *getInVolume() { return inVolume; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADOSC() : ta() { };
    S_ADOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, float *inVolume, int optInFastPeriod, int optInSlowPeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADX() : ta() { };
    ADX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADX *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADX() : ta() { };
    S_ADX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADX *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ADXR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ADXR() : ta() { };
    ADXR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ADXR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ADXR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ADXR() : ta() { };
    S_ADXR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ADXR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class APO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    APO() : ta() { };
    APO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    APO *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_APO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_APO() : ta() { };
    S_APO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_APO *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AROON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outAroonDown;
        ar & outAroonUp;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    AROON() : ta() { };
    AROON(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    AROON *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class S_AROON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outAroonDown;
        ar & outAroonUp;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outAroonDown;
    double *outAroonUp;

    S_AROON() : ta() { };
    S_AROON(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    S_AROON *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    void update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outAroonDown, double *outAroonUp);
    TA_RetCode run();
};

class AROONOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AROONOSC() : ta() { };
    AROONOSC(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    AROONOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AROONOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AROONOSC() : ta() { };
    S_AROONOSC(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_AROONOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ASIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ASIN() : ta() { };
    ASIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ASIN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ASIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ASIN() : ta() { };
    S_ASIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ASIN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ATAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ATAN() : ta() { };
    ATAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    ATAN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ATAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ATAN() : ta() { };
    S_ATAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_ATAN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ATR() : ta() { };
    ATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ATR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ATR() : ta() { };
    S_ATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ATR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class AVGPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    AVGPRICE() : ta() { };
    AVGPRICE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    AVGPRICE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_AVGPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_AVGPRICE() : ta() { };
    S_AVGPRICE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_AVGPRICE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class BBANDS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outRealUpperBand;
        ar & outRealMiddleBand;
        ar & outRealLowerBand;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    BBANDS() : ta() { };
    BBANDS(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    BBANDS *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(double *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class S_BBANDS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outRealUpperBand;
        ar & outRealMiddleBand;
        ar & outRealLowerBand;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDevUp; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInNbDevDn; /* From TA_REAL_MIN to TA_REAL_MAX */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outRealUpperBand;
    double *outRealMiddleBand;
    double *outRealLowerBand;

    S_BBANDS() : ta() { };
    S_BBANDS(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    S_BBANDS *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    void update(float *inReal, int optInTimePeriod, double optInNbDevUp, double optInNbDevDn, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outRealUpperBand, double *outRealMiddleBand, double *outRealLowerBand);
    TA_RetCode run();
};

class BETA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    BETA() : ta() { };
    BETA(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    BETA *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_BETA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_BETA() : ta() { };
    S_BETA(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_BETA *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class BOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    BOP() : ta() { };
    BOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    BOP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_BOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_BOP() : ta() { };
    S_BOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_BOP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CCI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CCI() : ta() { };
    CCI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CCI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CCI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CCI() : ta() { };
    S_CCI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CCI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CDL2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL2CROWS() : ta() { };
    CDL2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL2CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL2CROWS() : ta() { };
    S_CDL2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL2CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3BLACKCROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3BLACKCROWS() : ta() { };
    CDL3BLACKCROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3BLACKCROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3BLACKCROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3BLACKCROWS() : ta() { };
    S_CDL3BLACKCROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3BLACKCROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3INSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3INSIDE() : ta() { };
    CDL3INSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3INSIDE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3INSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3INSIDE() : ta() { };
    S_CDL3INSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3INSIDE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3LINESTRIKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3LINESTRIKE() : ta() { };
    CDL3LINESTRIKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3LINESTRIKE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3LINESTRIKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3LINESTRIKE() : ta() { };
    S_CDL3LINESTRIKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3LINESTRIKE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3OUTSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3OUTSIDE() : ta() { };
    CDL3OUTSIDE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3OUTSIDE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3OUTSIDE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3OUTSIDE() : ta() { };
    S_CDL3OUTSIDE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3OUTSIDE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3STARSINSOUTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3STARSINSOUTH() : ta() { };
    CDL3STARSINSOUTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3STARSINSOUTH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3STARSINSOUTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3STARSINSOUTH() : ta() { };
    S_CDL3STARSINSOUTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3STARSINSOUTH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDL3WHITESOLDIERS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDL3WHITESOLDIERS() : ta() { };
    CDL3WHITESOLDIERS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDL3WHITESOLDIERS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDL3WHITESOLDIERS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDL3WHITESOLDIERS() : ta() { };
    S_CDL3WHITESOLDIERS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDL3WHITESOLDIERS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLABANDONEDBABY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLABANDONEDBABY() : ta() { };
    CDLABANDONEDBABY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLABANDONEDBABY *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLABANDONEDBABY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLABANDONEDBABY() : ta() { };
    S_CDLABANDONEDBABY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLABANDONEDBABY *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLADVANCEBLOCK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLADVANCEBLOCK() : ta() { };
    CDLADVANCEBLOCK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLADVANCEBLOCK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLADVANCEBLOCK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLADVANCEBLOCK() : ta() { };
    S_CDLADVANCEBLOCK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLADVANCEBLOCK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLBELTHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLBELTHOLD() : ta() { };
    CDLBELTHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLBELTHOLD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLBELTHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLBELTHOLD() : ta() { };
    S_CDLBELTHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLBELTHOLD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLBREAKAWAY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLBREAKAWAY() : ta() { };
    CDLBREAKAWAY(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLBREAKAWAY *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLBREAKAWAY : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLBREAKAWAY() : ta() { };
    S_CDLBREAKAWAY(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLBREAKAWAY *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCLOSINGMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCLOSINGMARUBOZU() : ta() { };
    CDLCLOSINGMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCLOSINGMARUBOZU *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCLOSINGMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCLOSINGMARUBOZU() : ta() { };
    S_CDLCLOSINGMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCLOSINGMARUBOZU *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCONCEALBABYSWALL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCONCEALBABYSWALL() : ta() { };
    CDLCONCEALBABYSWALL(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCONCEALBABYSWALL *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCONCEALBABYSWALL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCONCEALBABYSWALL() : ta() { };
    S_CDLCONCEALBABYSWALL(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCONCEALBABYSWALL *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLCOUNTERATTACK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLCOUNTERATTACK() : ta() { };
    CDLCOUNTERATTACK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLCOUNTERATTACK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLCOUNTERATTACK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLCOUNTERATTACK() : ta() { };
    S_CDLCOUNTERATTACK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLCOUNTERATTACK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDARKCLOUDCOVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDARKCLOUDCOVER() : ta() { };
    CDLDARKCLOUDCOVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDARKCLOUDCOVER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDARKCLOUDCOVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDARKCLOUDCOVER() : ta() { };
    S_CDLDARKCLOUDCOVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDARKCLOUDCOVER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDOJI() : ta() { };
    CDLDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDOJI() : ta() { };
    S_CDLDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDOJISTAR() : ta() { };
    CDLDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDOJISTAR() : ta() { };
    S_CDLDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLDRAGONFLYDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLDRAGONFLYDOJI() : ta() { };
    CDLDRAGONFLYDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLDRAGONFLYDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLDRAGONFLYDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLDRAGONFLYDOJI() : ta() { };
    S_CDLDRAGONFLYDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLDRAGONFLYDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLENGULFING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLENGULFING() : ta() { };
    CDLENGULFING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLENGULFING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLENGULFING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLENGULFING() : ta() { };
    S_CDLENGULFING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLENGULFING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLEVENINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLEVENINGDOJISTAR() : ta() { };
    CDLEVENINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLEVENINGDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLEVENINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLEVENINGDOJISTAR() : ta() { };
    S_CDLEVENINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLEVENINGDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLEVENINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLEVENINGSTAR() : ta() { };
    CDLEVENINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLEVENINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLEVENINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLEVENINGSTAR() : ta() { };
    S_CDLEVENINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLEVENINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLGAPSIDESIDEWHITE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLGAPSIDESIDEWHITE() : ta() { };
    CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLGAPSIDESIDEWHITE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLGAPSIDESIDEWHITE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLGAPSIDESIDEWHITE() : ta() { };
    S_CDLGAPSIDESIDEWHITE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLGAPSIDESIDEWHITE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLGRAVESTONEDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLGRAVESTONEDOJI() : ta() { };
    CDLGRAVESTONEDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLGRAVESTONEDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLGRAVESTONEDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLGRAVESTONEDOJI() : ta() { };
    S_CDLGRAVESTONEDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLGRAVESTONEDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHAMMER() : ta() { };
    CDLHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHAMMER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHAMMER() : ta() { };
    S_CDLHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHAMMER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHANGINGMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHANGINGMAN() : ta() { };
    CDLHANGINGMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHANGINGMAN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHANGINGMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHANGINGMAN() : ta() { };
    S_CDLHANGINGMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHANGINGMAN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHARAMI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHARAMI() : ta() { };
    CDLHARAMI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHARAMI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHARAMI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHARAMI() : ta() { };
    S_CDLHARAMI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHARAMI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHARAMICROSS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHARAMICROSS() : ta() { };
    CDLHARAMICROSS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHARAMICROSS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHARAMICROSS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHARAMICROSS() : ta() { };
    S_CDLHARAMICROSS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHARAMICROSS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIGHWAVE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIGHWAVE() : ta() { };
    CDLHIGHWAVE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIGHWAVE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIGHWAVE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIGHWAVE() : ta() { };
    S_CDLHIGHWAVE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIGHWAVE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIKKAKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIKKAKE() : ta() { };
    CDLHIKKAKE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIKKAKE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIKKAKE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIKKAKE() : ta() { };
    S_CDLHIKKAKE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIKKAKE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHIKKAKEMOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHIKKAKEMOD() : ta() { };
    CDLHIKKAKEMOD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHIKKAKEMOD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHIKKAKEMOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHIKKAKEMOD() : ta() { };
    S_CDLHIKKAKEMOD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHIKKAKEMOD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLHOMINGPIGEON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLHOMINGPIGEON() : ta() { };
    CDLHOMINGPIGEON(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLHOMINGPIGEON *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLHOMINGPIGEON : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLHOMINGPIGEON() : ta() { };
    S_CDLHOMINGPIGEON(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLHOMINGPIGEON *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLIDENTICAL3CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLIDENTICAL3CROWS() : ta() { };
    CDLIDENTICAL3CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLIDENTICAL3CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLIDENTICAL3CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLIDENTICAL3CROWS() : ta() { };
    S_CDLIDENTICAL3CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLIDENTICAL3CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLINNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLINNECK() : ta() { };
    CDLINNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLINNECK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLINNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLINNECK() : ta() { };
    S_CDLINNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLINNECK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLINVERTEDHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLINVERTEDHAMMER() : ta() { };
    CDLINVERTEDHAMMER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLINVERTEDHAMMER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLINVERTEDHAMMER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLINVERTEDHAMMER() : ta() { };
    S_CDLINVERTEDHAMMER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLINVERTEDHAMMER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLKICKING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLKICKING() : ta() { };
    CDLKICKING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLKICKING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLKICKING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLKICKING() : ta() { };
    S_CDLKICKING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLKICKING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLKICKINGBYLENGTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLKICKINGBYLENGTH() : ta() { };
    CDLKICKINGBYLENGTH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLKICKINGBYLENGTH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLKICKINGBYLENGTH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLKICKINGBYLENGTH() : ta() { };
    S_CDLKICKINGBYLENGTH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLKICKINGBYLENGTH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLADDERBOTTOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLADDERBOTTOM() : ta() { };
    CDLLADDERBOTTOM(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLADDERBOTTOM *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLADDERBOTTOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLADDERBOTTOM() : ta() { };
    S_CDLLADDERBOTTOM(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLADDERBOTTOM *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLONGLEGGEDDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLONGLEGGEDDOJI() : ta() { };
    CDLLONGLEGGEDDOJI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLONGLEGGEDDOJI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLONGLEGGEDDOJI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLONGLEGGEDDOJI() : ta() { };
    S_CDLLONGLEGGEDDOJI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLONGLEGGEDDOJI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLLONGLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLLONGLINE() : ta() { };
    CDLLONGLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLLONGLINE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLLONGLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLLONGLINE() : ta() { };
    S_CDLLONGLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLLONGLINE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMARUBOZU() : ta() { };
    CDLMARUBOZU(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMARUBOZU *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMARUBOZU : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMARUBOZU() : ta() { };
    S_CDLMARUBOZU(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMARUBOZU *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMATCHINGLOW : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMATCHINGLOW() : ta() { };
    CDLMATCHINGLOW(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMATCHINGLOW *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMATCHINGLOW : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMATCHINGLOW() : ta() { };
    S_CDLMATCHINGLOW(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMATCHINGLOW *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMATHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMATHOLD() : ta() { };
    CDLMATHOLD(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMATHOLD *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMATHOLD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMATHOLD() : ta() { };
    S_CDLMATHOLD(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMATHOLD *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMORNINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMORNINGDOJISTAR() : ta() { };
    CDLMORNINGDOJISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMORNINGDOJISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMORNINGDOJISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMORNINGDOJISTAR() : ta() { };
    S_CDLMORNINGDOJISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMORNINGDOJISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLMORNINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLMORNINGSTAR() : ta() { };
    CDLMORNINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLMORNINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLMORNINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInPenetration; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    double optInPenetration; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLMORNINGSTAR() : ta() { };
    S_CDLMORNINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLMORNINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, double optInPenetration, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLONNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLONNECK() : ta() { };
    CDLONNECK(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLONNECK *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLONNECK : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLONNECK() : ta() { };
    S_CDLONNECK(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLONNECK *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLPIERCING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLPIERCING() : ta() { };
    CDLPIERCING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLPIERCING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLPIERCING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLPIERCING() : ta() { };
    S_CDLPIERCING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLPIERCING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLRICKSHAWMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLRICKSHAWMAN() : ta() { };
    CDLRICKSHAWMAN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLRICKSHAWMAN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLRICKSHAWMAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLRICKSHAWMAN() : ta() { };
    S_CDLRICKSHAWMAN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLRICKSHAWMAN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLRISEFALL3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLRISEFALL3METHODS() : ta() { };
    CDLRISEFALL3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLRISEFALL3METHODS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLRISEFALL3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLRISEFALL3METHODS() : ta() { };
    S_CDLRISEFALL3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLRISEFALL3METHODS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSEPARATINGLINES : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSEPARATINGLINES() : ta() { };
    CDLSEPARATINGLINES(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSEPARATINGLINES *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSEPARATINGLINES : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSEPARATINGLINES() : ta() { };
    S_CDLSEPARATINGLINES(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSEPARATINGLINES *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSHOOTINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSHOOTINGSTAR() : ta() { };
    CDLSHOOTINGSTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSHOOTINGSTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSHOOTINGSTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSHOOTINGSTAR() : ta() { };
    S_CDLSHOOTINGSTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSHOOTINGSTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSHORTLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSHORTLINE() : ta() { };
    CDLSHORTLINE(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSHORTLINE *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSHORTLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSHORTLINE() : ta() { };
    S_CDLSHORTLINE(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSHORTLINE *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSPINNINGTOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSPINNINGTOP() : ta() { };
    CDLSPINNINGTOP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSPINNINGTOP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSPINNINGTOP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSPINNINGTOP() : ta() { };
    S_CDLSPINNINGTOP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSPINNINGTOP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSTALLEDPATTERN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSTALLEDPATTERN() : ta() { };
    CDLSTALLEDPATTERN(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSTALLEDPATTERN *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSTALLEDPATTERN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSTALLEDPATTERN() : ta() { };
    S_CDLSTALLEDPATTERN(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSTALLEDPATTERN *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLSTICKSANDWICH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLSTICKSANDWICH() : ta() { };
    CDLSTICKSANDWICH(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLSTICKSANDWICH *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLSTICKSANDWICH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLSTICKSANDWICH() : ta() { };
    S_CDLSTICKSANDWICH(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLSTICKSANDWICH *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTAKURI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTAKURI() : ta() { };
    CDLTAKURI(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTAKURI *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTAKURI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTAKURI() : ta() { };
    S_CDLTAKURI(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTAKURI *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTASUKIGAP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTASUKIGAP() : ta() { };
    CDLTASUKIGAP(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTASUKIGAP *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTASUKIGAP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTASUKIGAP() : ta() { };
    S_CDLTASUKIGAP(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTASUKIGAP *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTHRUSTING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTHRUSTING() : ta() { };
    CDLTHRUSTING(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTHRUSTING *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTHRUSTING : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTHRUSTING() : ta() { };
    S_CDLTHRUSTING(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTHRUSTING *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLTRISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLTRISTAR() : ta() { };
    CDLTRISTAR(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLTRISTAR *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLTRISTAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLTRISTAR() : ta() { };
    S_CDLTRISTAR(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLTRISTAR *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLUNIQUE3RIVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLUNIQUE3RIVER() : ta() { };
    CDLUNIQUE3RIVER(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLUNIQUE3RIVER *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLUNIQUE3RIVER : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLUNIQUE3RIVER() : ta() { };
    S_CDLUNIQUE3RIVER(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLUNIQUE3RIVER *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLUPSIDEGAP2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLUPSIDEGAP2CROWS() : ta() { };
    CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLUPSIDEGAP2CROWS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLUPSIDEGAP2CROWS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLUPSIDEGAP2CROWS() : ta() { };
    S_CDLUPSIDEGAP2CROWS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLUPSIDEGAP2CROWS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CDLXSIDEGAP3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inOpen;
    double *getInOpen() { return inOpen; }

    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    CDLXSIDEGAP3METHODS() : ta() { };
    CDLXSIDEGAP3METHODS(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    CDLXSIDEGAP3METHODS *create(int startIdx, int endIdx, double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inOpen, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_CDLXSIDEGAP3METHODS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inOpen;
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inOpen;
    float *getInOpen() { return inOpen; }

    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_CDLXSIDEGAP3METHODS() : ta() { };
    S_CDLXSIDEGAP3METHODS(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    S_CDLXSIDEGAP3METHODS *create(int startIdx, int endIdx, float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inOpen, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class CEIL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CEIL() : ta() { };
    CEIL(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    CEIL *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CEIL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CEIL() : ta() { };
    S_CEIL(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_CEIL *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CMO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CMO() : ta() { };
    CMO(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CMO *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CMO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CMO() : ta() { };
    S_CMO(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CMO *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class CORREL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    CORREL() : ta() { };
    CORREL(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    CORREL *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_CORREL : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_CORREL() : ta() { };
    S_CORREL(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_CORREL *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class COS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    COS() : ta() { };
    COS(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    COS *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_COS : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_COS() : ta() { };
    S_COS(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_COS *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class COSH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    COSH() : ta() { };
    COSH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    COSH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_COSH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_COSH() : ta() { };
    S_COSH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_COSH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DEMA() : ta() { };
    DEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    DEMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DEMA() : ta() { };
    S_DEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_DEMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DIV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DIV() : ta() { };
    DIV(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    DIV *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DIV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DIV() : ta() { };
    S_DIV(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_DIV *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class DX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    DX() : ta() { };
    DX(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    DX *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_DX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_DX() : ta() { };
    S_DX(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_DX *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class EMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    EMA() : ta() { };
    EMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    EMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_EMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_EMA() : ta() { };
    S_EMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_EMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class EXP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    EXP() : ta() { };
    EXP(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    EXP *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_EXP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_EXP() : ta() { };
    S_EXP(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_EXP *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class FLOOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    FLOOR() : ta() { };
    FLOOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    FLOOR *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_FLOOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_FLOOR() : ta() { };
    S_FLOOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_FLOOR *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_DCPERIOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_DCPERIOD() : ta() { };
    HT_DCPERIOD(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_DCPERIOD *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_DCPERIOD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_DCPERIOD() : ta() { };
    S_HT_DCPERIOD(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_DCPERIOD *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_DCPHASE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_DCPHASE() : ta() { };
    HT_DCPHASE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_DCPHASE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_DCPHASE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_DCPHASE() : ta() { };
    S_HT_DCPHASE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_DCPHASE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_PHASOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInPhase;
        ar & outQuadrature;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    HT_PHASOR() : ta() { };
    HT_PHASOR(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    HT_PHASOR *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class S_HT_PHASOR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInPhase;
        ar & outQuadrature;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outInPhase;
    double *outQuadrature;

    S_HT_PHASOR() : ta() { };
    S_HT_PHASOR(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    S_HT_PHASOR *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outInPhase, double *outQuadrature);
    TA_RetCode run();
};

class HT_SINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSine;
        ar & outLeadSine;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    HT_SINE() : ta() { };
    HT_SINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    HT_SINE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class S_HT_SINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSine;
        ar & outLeadSine;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outSine;
    double *outLeadSine;

    S_HT_SINE() : ta() { };
    S_HT_SINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    S_HT_SINE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outSine, double *outLeadSine);
    TA_RetCode run();
};

class HT_TRENDLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    HT_TRENDLINE() : ta() { };
    HT_TRENDLINE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    HT_TRENDLINE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_HT_TRENDLINE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_HT_TRENDLINE() : ta() { };
    S_HT_TRENDLINE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_HT_TRENDLINE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class HT_TRENDMODE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    HT_TRENDMODE() : ta() { };
    HT_TRENDMODE(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    HT_TRENDMODE *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_HT_TRENDMODE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_HT_TRENDMODE() : ta() { };
    S_HT_TRENDMODE(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    S_HT_TRENDMODE *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inReal, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class KAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    KAMA() : ta() { };
    KAMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    KAMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_KAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_KAMA() : ta() { };
    S_KAMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_KAMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG() : ta() { };
    LINEARREG(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG() : ta() { };
    S_LINEARREG(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_ANGLE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_ANGLE() : ta() { };
    LINEARREG_ANGLE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_ANGLE *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_ANGLE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_ANGLE() : ta() { };
    S_LINEARREG_ANGLE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_ANGLE *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_INTERCEPT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_INTERCEPT() : ta() { };
    LINEARREG_INTERCEPT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_INTERCEPT *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_INTERCEPT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_INTERCEPT() : ta() { };
    S_LINEARREG_INTERCEPT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_INTERCEPT *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LINEARREG_SLOPE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LINEARREG_SLOPE() : ta() { };
    LINEARREG_SLOPE(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    LINEARREG_SLOPE *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LINEARREG_SLOPE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LINEARREG_SLOPE() : ta() { };
    S_LINEARREG_SLOPE(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_LINEARREG_SLOPE *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LN() : ta() { };
    LN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    LN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LN() : ta() { };
    S_LN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_LN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class LOG10 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    LOG10() : ta() { };
    LOG10(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    LOG10 *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_LOG10 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_LOG10() : ta() { };
    S_LOG10(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_LOG10 *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MA() : ta() { };
    MA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    MA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MA() : ta() { };
    S_MA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_MA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MACD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACD() : ta() { };
    MACD(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACD *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(double *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACD : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACD() : ta() { };
    S_MACD(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACD *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(float *inReal, int optInFastPeriod, int optInSlowPeriod, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MACDEXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInFastMAType;
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSlowMAType;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & optInSignalMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACDEXT() : ta() { };
    MACDEXT(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACDEXT *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(double *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACDEXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInFastMAType;
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInSlowMAType;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & optInSignalMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    TA_MAType optInFastMAType;
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInSlowMAType;
    int optInSignalPeriod; /* From 1 to 100000 */
    TA_MAType optInSignalMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACDEXT() : ta() { };
    S_MACDEXT(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACDEXT *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(float *inReal, int optInFastPeriod, TA_MAType optInFastMAType, int optInSlowPeriod, TA_MAType optInSlowMAType, int optInSignalPeriod, TA_MAType optInSignalMAType, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MACDFIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    MACDFIX() : ta() { };
    MACDFIX(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    MACDFIX *create(int startIdx, int endIdx, double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(double *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class S_MACDFIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInSignalPeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMACD;
        ar & outMACDSignal;
        ar & outMACDHist;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInSignalPeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMACD;
    double *outMACDSignal;
    double *outMACDHist;

    S_MACDFIX() : ta() { };
    S_MACDFIX(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    S_MACDFIX *create(int startIdx, int endIdx, float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    void update(float *inReal, int optInSignalPeriod, int *outBegIdx, int *outNBElement, double *outMACD, double *outMACDSignal, double *outMACDHist);
    TA_RetCode run();
};

class MAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastLimit; /* From 0.01 to 0.99 */
        ar & optInSlowLimit; /* From 0.01 to 0.99 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMAMA;
        ar & outFAMA;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    MAMA() : ta() { };
    MAMA(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    MAMA *create(int startIdx, int endIdx, double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(double *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class S_MAMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastLimit; /* From 0.01 to 0.99 */
        ar & optInSlowLimit; /* From 0.01 to 0.99 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMAMA;
        ar & outFAMA;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    double optInFastLimit; /* From 0.01 to 0.99 */
    double optInSlowLimit; /* From 0.01 to 0.99 */
    int *outBegIdx;
    int *outNBElement;
    double *outMAMA;
    double *outFAMA;

    S_MAMA() : ta() { };
    S_MAMA(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    S_MAMA *create(int startIdx, int endIdx, float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    void update(float *inReal, double optInFastLimit, double optInSlowLimit, int *outBegIdx, int *outNBElement, double *outMAMA, double *outFAMA);
    TA_RetCode run();
};

class MAVP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & inPeriods;
        ar & optInMinPeriod; /* From 2 to 100000 */
        ar & optInMaxPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    double *inPeriods;
    double *getInPeriods() { return inPeriods; }

    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MAVP() : ta() { };
    MAVP(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    MAVP *create(int startIdx, int endIdx, double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, double *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MAVP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & inPeriods;
        ar & optInMinPeriod; /* From 2 to 100000 */
        ar & optInMaxPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    float *inPeriods;
    float *getInPeriods() { return inPeriods; }

    int optInMinPeriod; /* From 2 to 100000 */
    int optInMaxPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MAVP() : ta() { };
    S_MAVP(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_MAVP *create(int startIdx, int endIdx, float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, float *inPeriods, int optInMinPeriod, int optInMaxPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MAX() : ta() { };
    MAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MAX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MAX() : ta() { };
    S_MAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MAX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    MAXINDEX() : ta() { };
    MAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    MAXINDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_MAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_MAXINDEX() : ta() { };
    S_MAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    S_MAXINDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class MEDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MEDPRICE() : ta() { };
    MEDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    MEDPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MEDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MEDPRICE() : ta() { };
    S_MEDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    S_MEDPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MFI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    double *inVolume;
    double *getInVolume() { return inVolume; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MFI() : ta() { };
    MFI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MFI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, double *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MFI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & inVolume;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    float *inVolume;
    float *getInVolume() { return inVolume; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MFI() : ta() { };
    S_MFI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MFI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, float *inVolume, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIDPOINT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIDPOINT() : ta() { };
    MIDPOINT(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIDPOINT *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIDPOINT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIDPOINT() : ta() { };
    S_MIDPOINT(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIDPOINT *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIDPRICE() : ta() { };
    MIDPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIDPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIDPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIDPRICE() : ta() { };
    S_MIDPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIDPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MIN() : ta() { };
    MIN(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MIN *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MIN() : ta() { };
    S_MIN(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MIN *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MININDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    MININDEX() : ta() { };
    MININDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    MININDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class S_MININDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outInteger;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outInteger;

    S_MININDEX() : ta() { };
    S_MININDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    S_MININDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outInteger);
    TA_RetCode run();
};

class MINMAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMin;
        ar & outMax;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    MINMAX() : ta() { };
    MINMAX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    MINMAX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class S_MINMAX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMin;
        ar & outMax;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outMin;
    double *outMax;

    S_MINMAX() : ta() { };
    S_MINMAX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    S_MINMAX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outMin, double *outMax);
    TA_RetCode run();
};

class MINMAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMinIdx;
        ar & outMaxIdx;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    MINMAXINDEX() : ta() { };
    MINMAXINDEX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    MINMAXINDEX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class S_MINMAXINDEX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outMinIdx;
        ar & outMaxIdx;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    int *outMinIdx;
    int *outMaxIdx;

    S_MINMAXINDEX() : ta() { };
    S_MINMAXINDEX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    S_MINMAXINDEX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, int *outMinIdx, int *outMaxIdx);
    TA_RetCode run();
};

class MINUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MINUS_DI() : ta() { };
    MINUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MINUS_DI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MINUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MINUS_DI() : ta() { };
    S_MINUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MINUS_DI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MINUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MINUS_DM() : ta() { };
    MINUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MINUS_DM *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MINUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MINUS_DM() : ta() { };
    S_MINUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MINUS_DM *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MOM() : ta() { };
    MOM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    MOM *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MOM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MOM() : ta() { };
    S_MOM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_MOM *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class MULT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    MULT() : ta() { };
    MULT(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    MULT *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_MULT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_MULT() : ta() { };
    S_MULT(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_MULT *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class NATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    NATR() : ta() { };
    NATR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    NATR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_NATR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_NATR() : ta() { };
    S_NATR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_NATR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class OBV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    double *inVolume;
    double *getInVolume() { return inVolume; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    OBV() : ta() { };
    OBV(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    OBV *create(int startIdx, int endIdx, double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, double *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_OBV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & inVolume;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    float *inVolume;
    float *getInVolume() { return inVolume; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_OBV() : ta() { };
    S_OBV(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    S_OBV *create(int startIdx, int endIdx, float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, float *inVolume, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PLUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PLUS_DI() : ta() { };
    PLUS_DI(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    PLUS_DI *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PLUS_DI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PLUS_DI() : ta() { };
    S_PLUS_DI(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_PLUS_DI *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PLUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PLUS_DM() : ta() { };
    PLUS_DM(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    PLUS_DM *create(int startIdx, int endIdx, double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PLUS_DM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PLUS_DM() : ta() { };
    S_PLUS_DM(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_PLUS_DM *create(int startIdx, int endIdx, float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class PPO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    PPO() : ta() { };
    PPO(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    PPO *create(int startIdx, int endIdx, double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_PPO : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInFastPeriod; /* From 2 to 100000 */
        ar & optInSlowPeriod; /* From 2 to 100000 */
        ar & optInMAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInFastPeriod; /* From 2 to 100000 */
    int optInSlowPeriod; /* From 2 to 100000 */
    TA_MAType optInMAType;
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_PPO() : ta() { };
    S_PPO(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    S_PPO *create(int startIdx, int endIdx, float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInFastPeriod, int optInSlowPeriod, TA_MAType optInMAType, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROC() : ta() { };
    ROC(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROC *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROC() : ta() { };
    S_ROC(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROC *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCP() : ta() { };
    ROCP(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCP *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCP : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCP() : ta() { };
    S_ROCP(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCP *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCR() : ta() { };
    ROCR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCR *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCR() : ta() { };
    S_ROCR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCR *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ROCR100 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ROCR100() : ta() { };
    ROCR100(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    ROCR100 *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ROCR100 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ROCR100() : ta() { };
    S_ROCR100(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_ROCR100 *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class RSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    RSI() : ta() { };
    RSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    RSI *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_RSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_RSI() : ta() { };
    S_RSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_RSI *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInAcceleration; /* From 0 to TA_REAL_MAX */
        ar & optInMaximum; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SAR() : ta() { };
    SAR(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    SAR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInAcceleration; /* From 0 to TA_REAL_MAX */
        ar & optInMaximum; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    double optInAcceleration; /* From 0 to TA_REAL_MAX */
    double optInMaximum; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SAR() : ta() { };
    S_SAR(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    S_SAR *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, double optInAcceleration, double optInMaximum, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SAREXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SAREXT() : ta() { };
    SAREXT(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    SAREXT *create(int startIdx, int endIdx, double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SAREXT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationShort; /* From 0 to TA_REAL_MAX */
        ar & optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    double optInStartValue; /* From TA_REAL_MIN to TA_REAL_MAX */
    double optInOffsetOnReverse; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxLong; /* From 0 to TA_REAL_MAX */
    double optInAccelerationInitShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationShort; /* From 0 to TA_REAL_MAX */
    double optInAccelerationMaxShort; /* From 0 to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SAREXT() : ta() { };
    S_SAREXT(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    S_SAREXT *create(int startIdx, int endIdx, float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, double optInStartValue, double optInOffsetOnReverse, double optInAccelerationInitLong, double optInAccelerationLong, double optInAccelerationMaxLong, double optInAccelerationInitShort, double optInAccelerationShort, double optInAccelerationMaxShort, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SIN() : ta() { };
    SIN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SIN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SIN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SIN() : ta() { };
    S_SIN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SIN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SINH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SINH() : ta() { };
    SINH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SINH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SINH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SINH() : ta() { };
    S_SINH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SINH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SMA() : ta() { };
    SMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    SMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SMA() : ta() { };
    S_SMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_SMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SQRT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SQRT() : ta() { };
    SQRT(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    SQRT *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SQRT : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SQRT() : ta() { };
    S_SQRT(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_SQRT *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class STDDEV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    STDDEV() : ta() { };
    STDDEV(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    STDDEV *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_STDDEV : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_STDDEV() : ta() { };
    S_STDDEV(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    S_STDDEV *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class STOCH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInSlowK_Period; /* From 1 to 100000 */
        ar & optInSlowK_MAType;
        ar & optInSlowD_Period; /* From 1 to 100000 */
        ar & optInSlowD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSlowK;
        ar & outSlowD;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    STOCH() : ta() { };
    STOCH(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    STOCH *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class S_STOCH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInSlowK_Period; /* From 1 to 100000 */
        ar & optInSlowK_MAType;
        ar & optInSlowD_Period; /* From 1 to 100000 */
        ar & optInSlowD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outSlowK;
        ar & outSlowD;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInFastK_Period; /* From 1 to 100000 */
    int optInSlowK_Period; /* From 1 to 100000 */
    TA_MAType optInSlowK_MAType;
    int optInSlowD_Period; /* From 1 to 100000 */
    TA_MAType optInSlowD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outSlowK;
    double *outSlowD;

    S_STOCH() : ta() { };
    S_STOCH(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    S_STOCH *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    void update(float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInSlowK_Period, TA_MAType optInSlowK_MAType, int optInSlowD_Period, TA_MAType optInSlowD_MAType, int *outBegIdx, int *outNBElement, double *outSlowK, double *outSlowD);
    TA_RetCode run();
};

class STOCHF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    STOCHF() : ta() { };
    STOCHF(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    STOCHF *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(double *inHigh, double *inLow, double *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class S_STOCHF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    S_STOCHF() : ta() { };
    S_STOCHF(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    S_STOCHF *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(float *inHigh, float *inLow, float *inClose, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class STOCHRSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    STOCHRSI() : ta() { };
    STOCHRSI(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    STOCHRSI *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(double *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class S_STOCHRSI : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInFastK_Period; /* From 1 to 100000 */
        ar & optInFastD_Period; /* From 1 to 100000 */
        ar & optInFastD_MAType;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outFastK;
        ar & outFastD;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int optInFastK_Period; /* From 1 to 100000 */
    int optInFastD_Period; /* From 1 to 100000 */
    TA_MAType optInFastD_MAType;
    int *outBegIdx;
    int *outNBElement;
    double *outFastK;
    double *outFastD;

    S_STOCHRSI() : ta() { };
    S_STOCHRSI(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    S_STOCHRSI *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    void update(float *inReal, int optInTimePeriod, int optInFastK_Period, int optInFastD_Period, TA_MAType optInFastD_MAType, int *outBegIdx, int *outNBElement, double *outFastK, double *outFastD);
    TA_RetCode run();
};

class SUB : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal0;
    double *getInReal0() { return inReal0; }

    double *inReal1;
    double *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SUB() : ta() { };
    SUB(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    SUB *create(int startIdx, int endIdx, double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal0, double *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SUB : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal0;
        ar & inReal1;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal0;
    float *getInReal0() { return inReal0; }

    float *inReal1;
    float *getInReal1() { return inReal1; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SUB() : ta() { };
    S_SUB(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    S_SUB *create(int startIdx, int endIdx, float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal0, float *inReal1, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class SUM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    SUM() : ta() { };
    SUM(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    SUM *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_SUM : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_SUM() : ta() { };
    S_SUM(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_SUM *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class T3 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInVFactor; /* From 0 to 1 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    T3() : ta() { };
    T3(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    T3 *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_T3 : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & optInVFactor; /* From 0 to 1 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    double optInVFactor; /* From 0 to 1 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_T3() : ta() { };
    S_T3(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    S_T3 *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, double optInVFactor, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TAN() : ta() { };
    TAN(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TAN *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TAN : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TAN() : ta() { };
    S_TAN(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_TAN *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TANH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TANH() : ta() { };
    TANH(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TANH *create(int startIdx, int endIdx, double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TANH : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TANH() : ta() { };
    S_TANH(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    S_TANH *create(int startIdx, int endIdx, float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TEMA() : ta() { };
    TEMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TEMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TEMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TEMA() : ta() { };
    S_TEMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TEMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRANGE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRANGE() : ta() { };
    TRANGE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TRANGE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRANGE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRANGE() : ta() { };
    S_TRANGE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRANGE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRIMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRIMA() : ta() { };
    TRIMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TRIMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRIMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRIMA() : ta() { };
    S_TRIMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRIMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TRIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TRIX() : ta() { };
    TRIX(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TRIX *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TRIX : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TRIX() : ta() { };
    S_TRIX(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TRIX *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TSF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TSF() : ta() { };
    TSF(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TSF *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TSF : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TSF() : ta() { };
    S_TSF(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_TSF *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class TYPPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    TYPPRICE() : ta() { };
    TYPPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TYPPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_TYPPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_TYPPRICE() : ta() { };
    S_TYPPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_TYPPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class ULTOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod1; /* From 1 to 100000 */
        ar & optInTimePeriod2; /* From 1 to 100000 */
        ar & optInTimePeriod3; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    ULTOSC() : ta() { };
    ULTOSC(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    ULTOSC *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_ULTOSC : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod1; /* From 1 to 100000 */
        ar & optInTimePeriod2; /* From 1 to 100000 */
        ar & optInTimePeriod3; /* From 1 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod1; /* From 1 to 100000 */
    int optInTimePeriod2; /* From 1 to 100000 */
    int optInTimePeriod3; /* From 1 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_ULTOSC() : ta() { };
    S_ULTOSC(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    S_ULTOSC *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod1, int optInTimePeriod2, int optInTimePeriod3, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class VAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    VAR() : ta() { };
    VAR(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    VAR *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_VAR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 1 to 100000 */
        ar & optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 1 to 100000 */
    double optInNbDev; /* From TA_REAL_MIN to TA_REAL_MAX */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_VAR() : ta() { };
    S_VAR(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    S_VAR *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, double optInNbDev, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WCLPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WCLPRICE() : ta() { };
    WCLPRICE(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    WCLPRICE *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WCLPRICE : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WCLPRICE() : ta() { };
    S_WCLPRICE(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    S_WCLPRICE *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WILLR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inHigh;
    double *getInHigh() { return inHigh; }

    double *inLow;
    double *getInLow() { return inLow; }

    double *inClose;
    double *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WILLR() : ta() { };
    WILLR(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    WILLR *create(int startIdx, int endIdx, double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inHigh, double *inLow, double *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WILLR : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inHigh;
        ar & inLow;
        ar & inClose;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inHigh;
    float *getInHigh() { return inHigh; }

    float *inLow;
    float *getInLow() { return inLow; }

    float *inClose;
    float *getInClose() { return inClose; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WILLR() : ta() { };
    S_WILLR(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_WILLR *create(int startIdx, int endIdx, float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inHigh, float *inLow, float *inClose, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class WMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    double *inReal;
    double *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    WMA() : ta() { };
    WMA(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    WMA *create(int startIdx, int endIdx, double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(double *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

class S_WMA : public ta {
private:
    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned version) {
        ar & inReal;
        ar & optInTimePeriod; /* From 2 to 100000 */
        ar & outBegIdx;
        ar & outNBElement;
        ar & outReal;
    }

public:
    float *inReal;
    float *getInReal() { return inReal; }

    int optInTimePeriod; /* From 2 to 100000 */
    int *outBegIdx;
    int *outNBElement;
    double *outReal;

    S_WMA() : ta() { };
    S_WMA(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    S_WMA *create(int startIdx, int endIdx, float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    void update(float *inReal, int optInTimePeriod, int *outBegIdx, int *outNBElement, double *outReal);
    TA_RetCode run();
};

}

#endif // __TA_HH__
