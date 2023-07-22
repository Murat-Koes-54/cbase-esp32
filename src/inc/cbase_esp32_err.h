/**
 * @file cbase_esp32_err.h
 *
 * @ingroup ErrorCodes
 *
 * @brief Error code definitions.
 */

/*
 * Copyright (c) 2023 Murat Kös.
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution.
 */

#if !( defined( EBX_CBASE_ESP32_ERR_H ) )
#define EBX_CBASE_ESP32_ERR_H

/* *INDENT-OFF* */
#ifdef __cplusplus
extern "C" {
#endif
/* *INDENT-ON* */

/* @{ */

#define EBX_MKERR( start, val )  ( ( start ) - ( val ) )
#define EBX_MKSTAT( start, val ) ( ( start ) + ( val ) )

#define EBX_ERR_START     0
#define EBX_STAT_START    0
#define EBX_ERROR( val )  EBX_MKERR( EBX_ERR_START, ( val ) )
#define EBX_STATUS( val ) EBX_MKSTAT( EBX_STAT_START, ( val ) )

#define EBX_EOK        EBX_ERROR( 0 )  /*!< No error. */
#define EBX_EGENERIC   EBX_ERROR( 1 )  /*!< Generic error. */
#define EBX_ERR        EBX_EGENERIC    /*!< Generic error. */
#define EBX_ECLOSE     EBX_ERORR( 2 )  /*!< Device or resource closed. */
#define EBX_ECANCEL    EBX_ERROR( 3 )  /*!< Operation cancelled. */
#define EBX_EINT       EBX_ERROR( 4 )  /*!< Operation interrupted. */
#define EBX_EINVAL     EBX_ERROR( 5 )  /*!< Invalid arguments. */
#define EBX_EBUSY      EBX_ERROR( 6 )  /*!< Device or resource busy. */
#define EBX_ETIMEOUT   EBX_ERROR( 7 )  /*!< Timeout. */
#define EBX_ENOTFOUND  EBX_ERROR( 8 )  /*!< Device or resource not found. */
#define EBX_ERANGE     EBX_ERROR( 9 )  /*!< Out of range. */
#define EBX_ELENGTH    EBX_ERROR( 10 ) /*!< Invalid length. */
#define EBX_EBUFSIZE   EBX_ERROR( 11 ) /*!< Invalid buffer size. */
#define EBX_EEMPTY     EBX_ERROR( 12 ) /*!< Queue or buffer is empty. */
#define EBX_EUNDERFLOW EBX_ERROR( 13 ) /*!< Integer or buffer underflow. */
#define EBX_EOVERFLOW  EBX_ERROR( 14 ) /*!< Integer or buffer overflow. */
#define EBX_ENESTING   EBX_ERROR( 15 ) /*!< Nesting error. */
#define EBX_ESTATE     EBX_ERROR( 16 ) /*!< Invalid state. */
#define EBX_EDATA      EBX_ERROR( 17 ) /*!< Data error. */
#define EBX_EAUTH      EBX_ERROR( 18 ) /*!< Authentication error. */
#define EBX_ECHECKSUM  EBX_ERROR( 19 ) /*!< Checksum error. */
#define EBX_EHARDWARE  EBX_ERROR( 20 ) /*!< Hardware error. */
#define EBX_EPLATFORM  EBX_ERROR( 21 ) /*!< Invalid platform. */

/**
 * @brief Last valid error code.
 */
#define EBX_ERR_END EBX_EPLATFORM

/**
 * @brief Use this macro to define application specific error codes.
 *
 * @param[in] val Error code offset, first error code should have offset 1.
 */
#define EBX_APPERR( val ) EBX_MKERR( EBX_ERR_END, ( val ) )

/**
 * @brief Macros for non-error status responses are positive.
 */
#define EBX_TRUE  EBX_STATUS( 1 )
#define EBX_FALSE EBX_EOK

#define EBX_SWARN       EBX_STATUS( 2 ) /*!< Generic warning. */
#define EBX_SMATCHED    EBX_STATUS( 3 ) /*!< Match found. */
#define EBX_SWRAPPED    EBX_STATUS( 4 ) /*!< Wraparound occurred. */
#define EBX_SINPROGRESS EBX_STATUS( 5 ) /*!< Operation in progress. */

/**
 * @brief Last status code.
 */
#define EBX_STAT_END EBX_SINPROGRESS

/**
 * @brief Use this macro to define application specific status codes.
 *
 * @param[in] val Status code offset, first status code should have offset 1.
 */
#define EBX_APPSTAT( val ) EBX_MKSTAT( EBX_STAT_END, ( val ) )

#define EBX_ERR_MIN INT_MIN
#define EBX_ERR_MAX INT_MAX

/**
 * @brief Standard status code return type.
 */
typedef int32_t ebx_err_t;

/* @} */

/* *INDENT-OFF* */
#ifdef __cplusplus
}
#endif
/* *INDENT-ON* */

#endif /* ifndef EBX_CBASE_ESP32_ERR_H */