/*
 * This program is free software you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2007-2008 Soeren Sonnenburg
 * Copyright (C) 2007-2008 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#ifndef __GUICOMMANDS_H_
#define __GUICOMMANDS_H_

#include <shogun/lib/config.h>
#include <shogun/lib/common.h>

//names of octave/python/matlab/R interface commands
#define N_SEND_COMMAND						"send_command"
#define N_CRC								"crc"
#define N_TRANSLATE_STRING					"translate_string"
#define N_GET_HMM							"get_hmm"
#define N_GET_VITERBI_PATH					"get_viterbi_path"
#define N_GET_NUM_SVMS						"get_num_svms"
#define N_GET_SVM							"get_svm"
#define N_GET_CLASSIFIER					"get_classifier"
#define N_GET_CLUSTERING					"get_clustering"
#define N_GET_SVM_OBJECTIVE					"get_svm_objective"
#define N_GET_KERNEL_INIT					"get_kernel_init"
#define N_GET_KERNEL_MATRIX					"get_kernel_matrix"
#define N_GET_DISTANCE_MATRIX				"get_distance_matrix"
#define N_HMM_LIKELIHOOD					"hmm_likelihood"
#define N_GET_KERNEL_OPTIMIZATION			"get_kernel_optimization"
#define N_COMPUTE_BY_SUBKERNELS				"compute_by_subkernels"
#define N_SET_SUBKERNEL_WEIGHTS				"set_subkernel_weights"
#define N_SET_SUBKERNEL_WEIGHTS_COMBINED	"set_subkernel_weights_combined"
#define N_GET_DOTFEATURE_WEIGHTS_COMBINED	"get_dotfeature_weights_combined"
#define N_SET_DOTFEATURE_WEIGHTS_COMBINED	"set_dotfeature_weights_combined"
#define N_SET_LAST_SUBKERNEL_WEIGHTS		"set_last_subkernel_weights"
#define N_SET_WD_POS_WEIGHTS				"set_WD_position_weights"
#define N_GET_SUBKERNEL_WEIGHTS				"get_subkernel_weights"
#define N_GET_LAST_SUBKERNEL_WEIGHTS		"get_last_subkernel_weights"
#define N_GET_WD_POS_WEIGHTS				"get_WD_position_weights"
#define N_COMPUTE_POIM_WD					"compute_poim_wd"
#define N_GET_WD_SCORING					"get_WD_scoring"
#define N_GET_WD_CONSENSUS					"get_WD_consensus"
#define N_GET_SPEC_SCORING					"get_SPEC_scoring"
#define N_GET_SPEC_CONSENSUS				"get_SPEC_consensus"
#define N_GET_FEATURES						"get_features"
#define N_GET_LABELS						"get_labels"
#define N_GET_VERSION						"get_version"
#define N_GET_PREPROC_INIT					"get_preproc_init"
#define N_GET_HMM_DEFS						"get_hmm_defs"
#define N_SET_HMM							"set_hmm"
#define N_MODEL_PROB_NO_B_TRANS				"model_prob_no_b_trans"
#define N_BEST_PATH_NO_B_TRANS				"best_path_no_b_trans"
#define N_BEST_PATH_TRANS_DERIV				"best_path_trans_deriv"
#define N_BEST_PATH_TRANS					"best_path_trans"
#define N_SET_PLIF_STRUCT					"set_plif_struct"
#define N_GET_PLIF_STRUCT					"get_plif_struct"
#define N_PRECOMPUTE_SUBKERNELS				"precompute_subkernels"
#define N_PRECOMPUTE_CONTENT_SVMS			"precompute_content_svms"
#define N_GET_LIN_FEAT					"get_lin_feat"
#define N_SET_LIN_FEAT					"set_lin_feat"
#define N_INIT_DYN_PROG					"init_dyn_prog"
#define N_PRECOMPUTE_TILING_FEATURES		"precompute_tiling_features"
#define N_SET_MODEL							"set_model"
#define N_SET_FEATURE_MATRIX				"set_feature_matrix"
#define N_SET_FEATURE_MATRIX_SPARSE			"set_feature_matrix_sparse"
#define N_BEST_PATH_2STRUCT					"best_path_2struct"
#define N_BEST_PATH_TRANS_SIMPLE			"best_path_trans_simple"
#define N_BEST_PATH_NO_B					"best_path_no_b"
#define N_SET_SVM							"set_svm"
#define N_SET_CUSTOM_KERNEL					"set_custom_kernel"
#define N_SET_KERNEL_INIT					"set_kernel_init"
#define N_SET_KERNEL_NORMALIZATION			"set_kernel_normalization"
#define N_SET_FEATURES						"set_features"
#define N_FROM_POSITION_LIST				"from_position_list"
#define N_ADD_FEATURES						"add_features"
#define N_ADD_DOTFEATURES					"add_dotfeatures"
#define N_DEL_LAST_FEATURES					"del_last_features"
#define N_SET_LABELS						"set_labels"
#define N_SET_PREPROC_INIT					"set_preproc_init"
#define N_SET_HMM_DEFS						"set_hmm_defs"
#define N_ONE_CLASS_HMM_CLASSIFY			"one_class_hmm_classify"
#define N_ONE_CLASS_LINEAR_HMM_CLASSIFY		"one_class_linear_hmm_classify"
#define N_HMM_CLASSIFY						"hmm_classify"
#define N_ONE_CLASS_HMM_CLASSIFY_EXAMPLE	"one_class_hmm_classify_example"
#define N_HMM_CLASSIFY_EXAMPLE				"hmm_classify_example"
#define N_CLASSIFY							"classify"
#define N_CLASSIFY_EXAMPLE					"classify_example"
#define N_SVM_CLASSIFY						"svm_classify"
#define N_SVM_CLASSIFY_EXAMPLE				"svm_classify_example"
#define N_GET_PLUGIN_ESTIMATE				"get_plugin_estimate"
#define N_SET_PLUGIN_ESTIMATE				"set_plugin_estimate"
#define N_PLUGIN_ESTIMATE_CLASSIFY			"plugin_estimate_classify"
#define N_PLUGIN_ESTIMATE_CLASSIFY_EXAMPLE	"plugin_estimate_classify_example"

//names of text interface commands
#define N_NEW_HMM						"new_hmm"
#define N_NEW_SVM						"new_svm"
#define N_NEW_CLASSIFIER				"new_classifier"
#define N_NEW_PLUGIN_ESTIMATOR			"new_plugin_estimator"
#define N_NEW_REGRESSION				"new_regression"
#define N_NEW_CLUSTERING				"new_clustering"
#define N_TRAIN_ESTIMATOR				"train_estimator"
#define N_TRAIN_CLASSIFIER				"train_classifier"
#define N_TRAIN_REGRESSION				"train_regression"
#define N_TRAIN_CLUSTERING				"train_clustering"
#define N_SET_PERCEPTRON_PARAMETERS		"set_perceptron_parameters"
#define N_TEST_ESTIMATOR				"test_estimator"
#define N_LOAD_PREPROC					"load_preproc"
#define N_SAVE_PREPROC					"save_preproc"
#define N_LOAD_HMM						"load_hmm"
#define N_SAVE_HMM						"save_hmm"
#define N_LOAD_CLASSIFIER				"load_classifier"
#define N_SAVE_CLASSIFIER				"save_classifier"
#define N_LOAD_KERNEL_INIT				"load_kernel_init"
#define N_SAVE_KERNEL_INIT				"save_kernel_init"
#define N_LOAD_LABELS					"load_labels"
#define N_LOAD_FEATURES					"load_features"
#define N_SAVE_FEATURES					"save_features"
#define N_CLEAN_FEATURES				"clean_features"
#define N_SLIDE_WINDOW					"slide_window"
#define N_RESHAPE						"reshape"
#define N_LOAD_DEFINITIONS				"load_defs"
#define N_SAVE_KERNEL					"save_kernel"
#define N_SET_HMM_AS					"set_hmm_as"
#define N_NORMALIZE						"normalize_hmm"
#define N_RELATIVE_ENTROPY				"relative_entropy"
#define N_ENTROPY						"entropy"
#define N_PERMUTATION_ENTROPY			"permutation_entropy"
#define N_SET_KERNEL					"set_kernel"
#define N_SET_DISTANCE					"set_distance"
#define N_ADD_KERNEL					"add_kernel"
#define N_DEL_LAST_KERNEL				"del_last_kernel"
#define N_CLEAN_KERNEL					"clean_kernel"

#ifdef USE_SVMLIGHT
#define N_RESIZE_KERNEL_CACHE			"resize_kernel_cache"
#endif //USE_SVMLIGHT

#define N_SET_KERNEL_OPTIMIZATION_TYPE	"set_kernel_optimization_type"
#define N_SET_PRIOR_PROBS				"set_prior_probs"
#define N_SET_PRIOR_PROBS_FROM_LABELS	"set_prior_probs_from_labels"
#define N_ATTACH_PREPROC				"attach_preproc"
#define N_ADD_PREPROC					"add_preproc"
#define N_DEL_PREPROC					"del_preproc"
#define N_CLEAN_PREPROC					"clean_preproc"
#define N_INIT_KERNEL					"init_kernel"
#define N_INIT_DISTANCE					"init_distance"
#define N_DELETE_KERNEL_OPTIMIZATION	"delete_kernel_optimization"
#define N_INIT_KERNEL_OPTIMIZATION		"init_kernel_optimization"
#define N_SAVE_PATH						"save_hmm_path"
#define N_SAVE_LIKELIHOOD				"save_hmm_likelihood"
#define N_BEST_PATH						"best_path"
#define N_VITERBI_TRAIN					"vit"
#define N_VITERBI_TRAIN_DEFINED			"vit_def"
#define N_LINEAR_TRAIN					"linear_train"
#define N_CLEAR							"clear"
#define N_CHOP							"chop"
#define N_CONVERGENCE_CRITERIA			"convergence_criteria"
#define N_PSEUDO						"pseudo"
#define N_CONVERT						"convert"
#define N_C								"c"
#define N_LOGLEVEL						"loglevel"
#define N_PROGRESS						"progress"
#define N_PRINT							"print"
#define N_ECHO							"echo"
#define N_SVMQPSIZE						"svm_qpsize"
#define N_SVMBUFSIZE					"svm_bufsize"
#define N_SVMMAXQPSIZE					"svm_max_qpsize"
#define N_THREADS						"threads"
#define N_MKL_PARAMETERS				"mkl_parameters"
#define N_SVM_EPSILON					"svm_epsilon"
#define N_SVM_MAX_TRAIN_TIME			"svm_max_train_time"
#define N_SVR_TUBE_EPSILON				"svr_tube_epsilon"
#define N_SVM_NU						"svm_nu"
#define N_SVM_USE_BIAS					"svm_use_bias"
#define N_DO_AUC_MAXIMIZATION			"do_auc_maximization"
#define N_ADD_STATES					"add_states"
#define N_APPEND_HMM					"append_hmm"
#define N_APPEND_MODEL					"append_model"
#define N_BAUM_WELCH_TRAIN				"bw"
#define N_BAUM_WELCH_TRANS_TRAIN		"bw_trans"
#define N_BAUM_WELCH_TRAIN_DEFINED		"bw_def"
#define N_LIKELIHOOD					"likelihood"
#define N_USE_BATCH_COMPUTATION			"use_batch_computation"
#define N_USE_DIAGONAL_SPEEDUP			"use_diagonal_speedup"
#define N_USE_MKL						"use_mkl"
#define N_USE_SHRINKING					"use_shrinking"
#define N_USE_LINADD					"use_linadd"
#define N_OUTPUT_HMM					"output_hmm"
#define N_OUTPUT_HMM_DEFINED			"output_hmm_defined"
#define N_QUIT							"quit"
#define N_EXEC							"exec"
#define N_EXIT							"exit"
#define N_SYNTAX_HIGHLIGHT				"syntax_highlight"
#define N_HELP							"help"
#define N_SYSTEM						"!"
#define N_SET_SOLVER					"set_solver"
#define N_SET_THRESHOLD					"set_threshold"
#define N_INIT_RANDOM					"init_random"
#define N_SVM_TRAIN						"svm_train"
#define N_SVM_TEST						"svm_test"
#define N_ONE_CLASS_HMM_TEST			"one_class_hmm_test"
#define N_HMM_TEST						"hmm_test"
#define N_SET_OUTPUT					"set_output"
#define N_SET_REF_FEAT					"set_ref_features"
#define N_TIC							"tic"
#define N_TOC							"toc"
#define N_KRR_TAU						"krr_tau"
#define N_RUN_PYTHON					"run_python"
#define N_RUN_OCTAVE					"run_octave"
#define N_RUN_R							"run_r"
#endif
