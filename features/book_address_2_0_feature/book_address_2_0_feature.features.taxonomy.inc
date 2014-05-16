<?php
/**
 * @file
 * book_address_2_0_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function book_address_2_0_feature_taxonomy_default_vocabularies() {
  return array(
    'category_book_address' => array(
      'name' => 'Category address book 2',
      'machine_name' => 'category_book_address',
      'description' => 'Category vocabulary of book_address module',
      'hierarchy' => 0,
      'module' => 'book_address',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
