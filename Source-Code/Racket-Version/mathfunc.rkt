#lang racket

;; ********************************************************************************************
;;  MathFunc
;;
;;  @description: A module for providing some mathematical functions
;;  @author: Elisha Lai
;;  @version: 1.2 22/05/2014
;; ********************************************************************************************

(provide max2 min2 maxfactor coprime)

;; max2: Int Int -> Int
;; Conditions:
;;     PRE: True
;;     POST: Produces an Int.
;; Purpose: Consumes two integers, a and b. Produces the largest of the two consumed
;; integers.

;; min2: Int Int -> Int
;; Conditions:
;;     PRE: True
;;     POST: Produces an Int.
;; Purpose: Consumes two integers, a and b. Produces the smallest of the two consumed
;; integers.

;; maxfactor: Int -> Int
;; Conditions:
;;     PRE: a > 1
;;     POST: Produces an Int.
;;           0 < Produced value < a
;; Purpose: Consumes an integer, a, and produces the largest factor of the consumed integer.

;; coprime: Int Int -> Boolean
;; Conditions:
;;     PRE: a > 0
;;          b > 0
;;     POST: Produces a Boolean.
;; Purpose: Consumes two integers, a and b. Produces #t if both the consumed integers have
;; the greatest common divisor of 1. Otherwise, #f is produced.

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; see interface above
(define (max2 a b)
  (cond
    [(>= a b) a]
    [else b]))

;; see interface above
(define (min2 a b)
  (cond
    [(<= a b) a]
    [else b]))

;; see interface above
(define (maxfactor a)
  ;; Maximum factor limit
  (define half-of-a (quotient a 2))
  ;; maxfactor-checker: Int Int -> Int
  ;; Conditions:
  ;;     PRE: m > 1
  ;;          n > 0
  ;;     POST: Produces an Int.
  ;;           0 < produced value < m
  ;; Purpose: Consumes two integers, m and n. Produces the largest factor of m.
  (define (maxfactor-checker m n)
    (cond
      [(zero? (remainder m n)) n]
      [else (maxfactor-checker m (sub1 n))]))
  (cond
    [(even? a) half-of-a]
    [else (maxfactor-checker a half-of-a)]))

;; see interface above
(define (coprime a b)
  ;; gcd: Int Int -> Nat
  ;; Conditions:
  ;;     PRE: True
  ;;     POST: Produces an Nat.
  ;; Purpose: Consumes two integers, m and n. Produces the greatest common divisor of m and n.
  (define (gcd m n)
    (cond
      [(zero? m) n]
      [(zero? n) m]
      [else (gcd n (remainder m n))]))
  (= (gcd a b) 1))
  
